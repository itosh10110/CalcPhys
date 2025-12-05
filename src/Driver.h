#pragma once

#include <any>
#include <cmath>
#include <iostream>
#include <map>
#include <memory>
#include <string>
#include <vector>

#include "llvm/IR/BasicBlock.h"
#include "llvm/IR/Constants.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Type.h"
#include "llvm/IR/Verifier.h"

#include "CalcFis/CalcFisBaseVisitor.h"
#include "CalcFis/CalcFisParser.h"

using namespace antlr4;
using namespace llvm;

class CalcFisDriver : public CalcFisBaseVisitor {
private:
  LLVMContext context;
  std::unique_ptr<Module> module;
  std::unique_ptr<IRBuilder<>> builder;
  std::map<std::string, Value *> namedValues;

  FunctionCallee printfFunc;
  /*Value *formatStrInt;
  Value *formatStrInt;
  Value *formatStrFloat;
  Value *formatStrStr;*/

public:
  CalcFisDriver()
      : module(std::make_unique<Module>("CalcFis", context)),
        builder(std::make_unique<IRBuilder<>>(context)) {
    setupExternalFunctions();
  }

  std::unique_ptr<Module> getModule() { return std::move(module); }

  // Inicializar funciones externas
  void setupExternalFunctions() {
    PointerType *Pty = PointerType::getUnqual(context);
    FunctionType *FunTy =
        FunctionType::get(IntegerType::get(context, 32), {Pty}, true);
    printfFunc = module->getOrInsertFunction("printf", FunTy);
  }

  // Int a double
  Value *castToDouble(Value *v) {
    if (v->getType()->isDoubleTy()) {
      return v;
    }
    return builder->CreateSIToFP(v, Type::getDoubleTy(context), "casttmp");
  }

  // De any a get Value*
  Value *getVal(std::any a) {
    if (!a.has_value()) {
      return nullptr;
    }
    try {
      if (a.type() == typeid(nullptr_t)) {
        return nullptr;
      }
      return std::any_cast<Value *>(a);
    } catch (const std::bad_any_cast &e) {
      std::cerr << "Error casting std::any to Value*: " << e.what()
                << std::endl;
      return nullptr;
    }
  }

virtual std::any visitProg(CalcFisParser::ProgContext *ctx) override {
    FunctionType *funcType = FunctionType::get(builder->getInt32Ty(), false);
    Function *mainFunc = Function::Create(funcType, Function::ExternalLinkage,
                                          "main", module.get());
    BasicBlock *entry = BasicBlock::Create(context, "entry", mainFunc);
    builder->SetInsertPoint(entry);

    // Visitar hijos del programa
    visitChildren(ctx);

    // Retornar 0
    builder->CreateRet(builder->getInt32(0));

    verifyModule(*module, &errs());
    module->print(outs(), nullptr);

    return std::any();
}

  // --- Print ---
  virtual std::any
  visitThePrintExpr(CalcFisParser::ThePrintExprContext *ctx) override {
    for (auto child : ctx->children) {
      if (auto term = dynamic_cast<antlr4::tree::TerminalNode *>(child)) {
        if (term->getSymbol()->getType() == CalcFisParser::STRING) {
          
          std::string raw = term->getText();
          // Remover comillas
          std::string content = raw.substr(1, raw.length() - 2);

          // Crear string global
          Value *strVal = builder->CreateGlobalStringPtr(content);

          // Print empleando %s
          std::vector<Value *> args;

          
          Value *fmt = builder->CreateGlobalStringPtr("%s");
          builder->CreateCall(printfFunc, {fmt, strVal});
        }
      } else if (auto exprCtx =
                     dynamic_cast<CalcFisParser::ExprContext *>(child)) {
        // Es una expresión
        Value *val = getVal(visit(exprCtx));
        if (val) {
          if (val->getType()->isDoubleTy()) {
            Value *fmt = builder->CreateGlobalStringPtr("%f");
            builder->CreateCall(printfFunc, {fmt, val});
          } else if (val->getType()->isIntegerTy()) {
            Value *fmt = builder->CreateGlobalStringPtr("%d");
            builder->CreateCall(printfFunc, {fmt, val});
          } else if (val->getType()->isPointerTy()) {
            
            Value *fmt = builder->CreateGlobalStringPtr("%s");
            builder->CreateCall(printfFunc, {fmt, val});
          }
        }
      }
    }
    
    Value *nl = builder->CreateGlobalStringPtr("\n");
    Value *fmt = builder->CreateGlobalStringPtr("%s");
    builder->CreateCall(printfFunc, {fmt, nl});

    return (Value *)nullptr;
  }

  virtual std::any
  visitTheStringExpr(CalcFisParser::TheStringExprContext *ctx) override {
    std::string raw = ctx->STRING()->getText();
    std::string content = raw.substr(1, raw.length() - 2);
    return (Value *)builder->CreateGlobalStringPtr(content);
  }

  // Números
  virtual std::any
  visitNumMatExpr(CalcFisParser::NumMatExprContext *ctx) override {
    return visit(ctx->num());
  }

  virtual std::any visitNum(CalcFisParser::NumContext *ctx) override {
    if (ctx->INT()) {
      int val = std::stoi(ctx->INT()->getText());
      return (Value *)ConstantInt::get(context, APInt(32, val, true));
    } else if (ctx->FLOAT()) {
      float val = std::stof(ctx->FLOAT()->getText());
      return (Value *)ConstantFP::get(context, APFloat((double)val));
    }
    return (Value *)nullptr;
  }

  // Identificadores
  virtual std::any
  visitIdMatExpr(CalcFisParser::IdMatExprContext *ctx) override {
    std::string name = ctx->ID()->getText();
    if (namedValues.find(name) == namedValues.end()) {
      std::cerr << "Variable not defined: " << name << std::endl;
      return (Value *)nullptr;
    }
    return namedValues[name];
  }

  // --- Assignment ---
  virtual std::any
  visitAssignStat(CalcFisParser::AssignStatContext *ctx) override {
    std::string name = ctx->ID()->getText();
    Value *val = getVal(visit(ctx->expr()));
    if (!val)
      return (Value *)nullptr;

    namedValues[name] = val;

    // Formato dinámico con nombre de las variables
    std::string fmt;
    if (val->getType()->isDoubleTy()) {
      fmt = name + ": %f\n";
    } else {
      fmt = name + ": %d\n";
    }

    Value *fmtStr = builder->CreateGlobalString(fmt, "fmt_" + name);

    // Opcional: Imprimir el valor asignado usando printf
    std::vector<Value *> args;
    args.push_back(fmtStr);
    args.push_back(val);
    builder->CreateCall(printfFunc, args);

    return val;
  }

  virtual std::any visitStmtExpr(CalcFisParser::StmtExprContext *ctx) override {
    Value *val = getVal(visit(ctx->expr()));
    if (!val)
        return (Value *)nullptr;

    std::string name;

    // Detectar si la expresión es un identificador
    if (ctx->expr()->getText().size() > 0 && isalpha(ctx->expr()->getText()[0])) {
        // Usa el texto del identificador directamente
        name = ctx->expr()->getText();
    } else {
        // Si no es identificador, usa un contador genérico
        static int exprCounter = 0;
        name = "Expr" + std::to_string(exprCounter++);
    }

    // Crear formato dinámico con nombre
    std::string fmt;
    if (val->getType()->isDoubleTy()) {
        fmt = name + ": %f\n";
    } else {
        fmt = name + ": %d\n";
    }

    Value *fmtStr = builder->CreateGlobalString(fmt, "fmt_" + name);

    // Llamar a printf
    std::vector<Value *> args;
    args.push_back(fmtStr);
    args.push_back(val);
    builder->CreateCall(printfFunc, args);

    return val;
  }


  // Paréntesis
  virtual std::any
  visitParenMatExpr(CalcFisParser::ParenMatExprContext *ctx) override {
    return visit(ctx->matExpr());
  }

  // Operaciones matemáticas
  virtual std::any
  visitAddSubMatExpr(CalcFisParser::AddSubMatExprContext *ctx) override {
    Value *L = getVal(visit(ctx->matExpr(0)));
    Value *R = getVal(visit(ctx->matExpr(1)));
    if (!L || !R)
      return (Value *)nullptr;

    bool isFloat = L->getType()->isDoubleTy() || R->getType()->isDoubleTy();

    bool isAdd = ctx->ADD() != nullptr;

    if (isFloat) {
      L = castToDouble(L);
      R = castToDouble(R);
      if (isAdd)
        return (Value *)builder->CreateFAdd(L, R, "addtmp");
      else
        return (Value *)builder->CreateFSub(L, R, "subtmp");
    } else {
      if (isAdd)
        return (Value *)builder->CreateAdd(L, R, "addtmp");
      else
        return (Value *)builder->CreateSub(L, R, "subtmp");
    }
  }

  virtual std::any
  visitMulDivMatExpr(CalcFisParser::MulDivMatExprContext *ctx) override {
    Value *L = getVal(visit(ctx->matExpr(0)));
    Value *R = getVal(visit(ctx->matExpr(1)));
    if (!L || !R)
      return (Value *)nullptr;

    bool isMul = ctx->MUL() != nullptr;
    bool isDiv = ctx->DIV() != nullptr;

    if (isDiv) {
      L = castToDouble(L);
      R = castToDouble(R);
      return (Value *)builder->CreateFDiv(L, R, "divtmp");
    }

    bool isFloat = L->getType()->isDoubleTy() || R->getType()->isDoubleTy();

    if (isFloat) {
      L = castToDouble(L);
      R = castToDouble(R);
      if (isMul)
        return (Value *)builder->CreateFMul(L, R, "multmp");
    } else {
      if (isMul)
        return (Value *)builder->CreateMul(L, R, "multmp");
    }
    return (Value *)nullptr;
  }

  virtual std::any
  visitModMatExpr(CalcFisParser::ModMatExprContext *ctx) override {
    Value *L = getVal(visit(ctx->matExpr(0)));
    Value *R = getVal(visit(ctx->matExpr(1)));
    if (!L || !R)
      return (Value *)nullptr;
  
    if (L->getType()->isIntegerTy() && R->getType()->isIntegerTy()) {
      return (Value *)builder->CreateSRem(L, R, "modtmp");
    }
    // fmod para float
    L = castToDouble(L);
    R = castToDouble(R);
    return (Value *)builder->CreateFRem(L, R, "modtmp");
  }

  // Potencia y raíz
  virtual std::any
  visitPowerMatExpr(CalcFisParser::PowerMatExprContext *ctx) override {
    Value *L = getVal(visit(ctx->matExpr(0)));
    Value *R = getVal(visit(ctx->matExpr(1)));
    if (!L || !R)
      return (Value *)nullptr;
    L = castToDouble(L);
    R = castToDouble(R);

    // pow(L, R)
    // getDeclaration -> getOrInsertDeclaration
    Function *powFunc = Intrinsic::getOrInsertDeclaration(
        module.get(), Intrinsic::pow, {Type::getDoubleTy(context)});
    return (Value *)builder->CreateCall(powFunc, {L, R}, "powtmp");
  }

  virtual std::any
  visitRootMatExpr(CalcFisParser::RootMatExprContext *ctx) override {
    // index 'r' radicand -> radicand ^ (1/index)
    Value *Index = getVal(visit(ctx->matExpr(0)));
    Value *Radicand = getVal(visit(ctx->matExpr(1)));
    if (!Index || !Radicand)
      return (Value *)nullptr;
    Index = castToDouble(Index);
    Radicand = castToDouble(Radicand);

    Value *One = ConstantFP::get(context, APFloat(1.0));
    Value *InvIndex = builder->CreateFDiv(One, Index, "invindextmp");

    Function *powFunc = Intrinsic::getOrInsertDeclaration(
        module.get(), Intrinsic::pow, {Type::getDoubleTy(context)});
    return (Value *)builder->CreateCall(powFunc, {Radicand, InvIndex},
                                        "roottmp");
  }

  // Logaritmos
  virtual std::any
  visitLogMatExpr(CalcFisParser::LogMatExprContext *ctx) override {
    // log base, arg -> log(arg) / log(base)
    Value *Base = getVal(visit(ctx->matExpr(0)));
    Value *Arg = getVal(visit(ctx->matExpr(1)));
    if (!Base || !Arg)
      return (Value *)nullptr;
    Base = castToDouble(Base);
    Arg = castToDouble(Arg);

    Function *logFunc = Intrinsic::getOrInsertDeclaration(
        module.get(), Intrinsic::log, {Type::getDoubleTy(context)});
    Value *LogArg = builder->CreateCall(logFunc, {Arg}, "logarg");
    Value *LogBase = builder->CreateCall(logFunc, {Base}, "logbase");

    return (Value *)builder->CreateFDiv(LogArg, LogBase, "logtmp");
  }

  // Funciones trigonométricas
  Value *createUnaryMathCall(std::string name, Value *arg) {
    arg = castToDouble(arg);

    if (name == "sin") {
      Function *f = Intrinsic::getOrInsertDeclaration(
          module.get(), Intrinsic::sin, {Type::getDoubleTy(context)});
      return builder->CreateCall(f, {arg}, "sintmp");
    }
    if (name == "cos") {
      Function *f = Intrinsic::getOrInsertDeclaration(
          module.get(), Intrinsic::cos, {Type::getDoubleTy(context)});
      return builder->CreateCall(f, {arg}, "costmp");
    }

    if (name == "tan") {
      Function *f = Intrinsic::getOrInsertDeclaration(
          module.get(), Intrinsic::tan, {Type::getDoubleTy(context)});
      return builder->CreateCall(f, {arg}, "tantmp");
    }

    FunctionType *ft = FunctionType::get(Type::getDoubleTy(context),
                                         {Type::getDoubleTy(context)}, false);
    FunctionCallee f = module->getOrInsertFunction(name, ft);
    return builder->CreateCall(f, {arg}, name + "tmp");
  }

  virtual std::any
  visitCosMatExpr(CalcFisParser::CosMatExprContext *ctx) override {
    return createUnaryMathCall("cos", getVal(visit(ctx->matExpr())));
  }
  virtual std::any
  visitSenMatExpr(CalcFisParser::SenMatExprContext *ctx) override {
    return createUnaryMathCall("sin", getVal(visit(ctx->matExpr())));
  }
  virtual std::any
  visitTgMatExpr(CalcFisParser::TgMatExprContext *ctx) override {
    return createUnaryMathCall("tan", getVal(visit(ctx->matExpr())));
  }

  virtual std::any
  visitSecMatExpr(CalcFisParser::SecMatExprContext *ctx) override {
    // sec(x) = 1/cos(x)
    Value *v = createUnaryMathCall("cos", getVal(visit(ctx->matExpr())));
    return (Value *)builder->CreateFDiv(ConstantFP::get(context, APFloat(1.0)),
                                        v, "sectmp");
  }

  virtual std::any
  visitCscMatExpr(CalcFisParser::CscMatExprContext *ctx) override {
    // csc(x) = 1/sin(x)
    Value *v = createUnaryMathCall("sin", getVal(visit(ctx->matExpr())));
    return (Value *)builder->CreateFDiv(ConstantFP::get(context, APFloat(1.0)),
                                        v, "csctmp");
  }

  virtual std::any
  visitCtgMatExpr(CalcFisParser::CtgMatExprContext *ctx) override {
    // ctg(x) = 1/tan(x)
    Value *v = createUnaryMathCall("tan", getVal(visit(ctx->matExpr())));
    return (Value *)builder->CreateFDiv(ConstantFP::get(context, APFloat(1.0)),
                                        v, "ctgtmp");
  }

  // Negativo
  virtual std::any
  visitMinMatExpr(CalcFisParser::MinMatExprContext *ctx) override {
    Value *v = getVal(visit(ctx->matExpr()));
    if (v->getType()->isDoubleTy()) {
      return (Value *)builder->CreateFNeg(v, "negtmp");
    } else {
      return (Value *)builder->CreateNeg(v, "negtmp");
    }
  }

  virtual std::any visitExprMat(CalcFisParser::ExprMatContext *ctx) override {
    return visit(ctx->matExpr());
  }

  virtual std::any visitExprPrint(CalcFisParser::ExprPrintContext *ctx) override{
    return visit(ctx->printExpr());
  }

  // ExprString
  virtual std::any visitExprString(CalcFisParser::ExprStringContext *ctx)  override{
    return visit(ctx->stringExpr());
  }

  /*/ thePrintExpr
  virtual std::any visitThePrintExpr(CalcFisParser::ThePrintExprContext *ctx) override{
    if (ctx->expr()){
      Value *val = getVal(visit(ctx->expr()));
      if (!val)
          return (Value *)nullptr;

      std::string name;

      // Detectar si la expresión es un identificador
      if (ctx->expr()->getText().size() > 0 && isalpha(ctx->expr()->getText()[0])) {
          // Usa el texto del identificador directamente
          name = ctx->expr()->getText();
      } else {
          // Si no es identificador, usa un contador genérico
          static int exprCounter = 0;
          name = "Expr" + std::to_string(exprCounter++);
      }

      // Crear formato dinámico con nombre
      std::string fmt;
      if (val->getType()->isDoubleTy()) {
          fmt = name + ": %f\n";
      } else {
          fmt = name + ": %d\n";
      }

      Value *fmtStr = builder->CreateGlobalString(fmt, "fmt_" + name);

      // Llamar a printf
      std::vector<Value *> args;
      args.push_back(fmtStr);
      args.push_back(val);
      builder->CreateCall(printfFunc, args);

      return val;
    } else if (ctx->stringExpr()){
        std::string str = ctx->stringExpr()->STRING()->getText();
        // Eliminar comillas
        str = str.substr(1, str.size() - 2);
        // Crear string global
        Value *strVal = builder->CreateGlobalString(str, "strtmp");
        
        // Llamar a printf para imprimir el string
        std::vector<Value *> args;
        args.push_back(strVal);
        builder->CreateCall(printfFunc, args);
        
        return strVal;
    } else {
        return (Value *)nullptr;
    }
  }

  // theString Expr
  virtual std::any visitTheStringExpr(CalcFisParser::TheStringExprContext *ctx) override{
    std::string str = ctx->STRING()->getText();
    // Eliminar comillas
    str = str.substr(1, str.size() - 2);
    // Crear string global
    Value *strVal = builder->CreateGlobalString(str, "strtmp");
    return strVal;
  }*/

  // OPERACIONES FÍSICAS
  // AQUÍ EMPIEZA LO BUENO...

  virtual std::any visitOperPars(CalcFisParser::OperParsContext *ctx) override {
    std::string oper = ctx->oper()->getText();
    std::map<std::string, Value *> params;

    if (auto parParCtx =
            dynamic_cast<CalcFisParser::ParParContext *>(ctx->pars())) {
      for (auto p : parParCtx->par()) {
        if (auto decl = dynamic_cast<CalcFisParser::DeclIDContext *>(p)) {
          std::string name = decl->ID()->getText();
          Value *val = getVal(visit(decl->matExpr()));
          params[name] = val;
        } else if (auto declUnk =
                       dynamic_cast<CalcFisParser::DeclIDUnknownContext *>(p)) {
          std::string name = declUnk->ID()->getText();
          params[name] = nullptr;
        }
      }
    }

    if (oper == "cl")
      return operCaidaLibre(params);
    if (oper == "mru")
      return operMRU(params);
    if (oper == "mruv")
      return operMRUV(params);
    if (oper == "tm")
      return operTrabajMec(params);
    if (oper == "mcel")
      return operMCeleste(params);
    if (oper == "mas")
      return operMAS(params);
    if (oper == "flu")
      return operFluidos(params);
    if (oper == "mcu")
      return operMCU(params);
    if (oper == "em")
      return operEnergMec(params);

    return (Value *)nullptr;
  }

  virtual std::any visitDeclID(CalcFisParser::DeclIDContext *ctx) override {
    return visit(ctx->matExpr());
  }

  virtual std::any
  visitDeclIDUnknown(CalcFisParser::DeclIDUnknownContext *ctx) override {
    return (Value *)nullptr;
  }

  // Print
  void printResult(const std::string &label, Value *val,
                   const std::string &unit = "") {
    // Crear formato string: "label: %f unit\n"
    std::string fmt = label + ": %f " + unit + "\n";
    
    Value *fmtStr = builder->CreateGlobalString(fmt, "fmt_res");

    val = castToDouble(val);
    builder->CreateCall(printfFunc, {fmtStr, val});
  }

  std::any operMRU(std::map<std::string, Value *> &pars) {
    Value *d = pars["d"];
    Value *v = pars["v"];
    Value *t = pars["t"];

    if (!d && v && t) {
      // d = v * t
      Value *res =
          builder->CreateFMul(castToDouble(v), castToDouble(t), "calc_d");
      printResult("Distancia recorrida", res, "m");
      return res;
    } else if (!v && d && t) {
      // v = d / t
      Value *res =
          builder->CreateFDiv(castToDouble(d), castToDouble(t), "calc_v");
      printResult("Velocidad", res, "m/s");
      return res;
    } else if (!t && d && v) {
      // t = d / v
      Value *res =
          builder->CreateFDiv(castToDouble(d), castToDouble(v), "calc_t");
      printResult("Tiempo recorrido", res, "s");
      return res;
    }
    std::cerr << "Variables insuficientes para MRU" << std::endl;
    return (Value *)nullptr;
  }

  std::any operCaidaLibre(std::map<std::string, Value *> &pars) {
    Value *h = pars["h"];
    Value *vi = pars["vi"];
    Value *vf = pars["vf"];
    Value *t = pars["t"];
    Value *a = pars["a"]; // 9.81

    if (!a)
      a = ConstantFP::get(context, APFloat(9.81));
    else
      a = castToDouble(a);

    if (vi)
      vi = castToDouble(vi);
    if (vf)
      vf = castToDouble(vf);
    if (h)
      h = castToDouble(h);
    if (t)
      t = castToDouble(t);

    if (!vf && vi && t) {
      // vf = vi + a * t
      Value *at = builder->CreateFMul(a, t);
      Value *res = builder->CreateFAdd(vi, at, "calc_vf");
      printResult("Velocidad final", res, "m/s");
      return res;
    } else if (h && !vf && vi) {
      // vf = sqrt(vi^2 + 2*a*h)
      Value *vi2 = builder->CreateFMul(vi, vi);
      Value *two = ConstantFP::get(context, APFloat(2.0));
      Value *two_a_h = builder->CreateFMul(two, builder->CreateFMul(a, h));
      Value *sum = builder->CreateFAdd(vi2, two_a_h);
      Function *sqrtFunc = Intrinsic::getOrInsertDeclaration(
          module.get(), Intrinsic::sqrt, {Type::getDoubleTy(context)});
      Value *res = builder->CreateCall(sqrtFunc, {sum}, "calc_vf");
      printResult("Velocidad final", res, "m/s");
      return res;
    } else if (!h && vi && t) {
      // h = vi*t + 0.5*a*t^2
      Value *vit = builder->CreateFMul(vi, t);
      Value *half = ConstantFP::get(context, APFloat(0.5));
      Value *half_a_t2 = builder->CreateFMul(
          half, builder->CreateFMul(a, builder->CreateFMul(t, t)));
      Value *res = builder->CreateFAdd(vit, half_a_t2, "calc_h");
      printResult("Altura", res, "m");
      return res;
    } else if (!t && vf && vi) {
      // t = (vf - vi) / a
      Value *diff = builder->CreateFSub(vf, vi);
      Value *res = builder->CreateFDiv(diff, a, "calc_t");
      printResult("Tiempo", res, "s");
      return res;
    }
    std::cerr << "Variables insuficientes para caida libre" << std::endl;
    return (Value *)nullptr;
  }

  std::any operMRUV(std::map<std::string, Value *> &pars) {
    Value *x0 = pars["x0"];
    Value *xf = pars["xf"];
    Value *v0 = pars["v0"];
    Value *vf = pars["vf"];
    Value *t = pars["t"];
    Value *a = pars["a"];

    if (x0)
      x0 = castToDouble(x0);
    if (xf)
      xf = castToDouble(xf);
    if (v0)
      v0 = castToDouble(v0);
    if (vf)
      vf = castToDouble(vf);
    if (t)
      t = castToDouble(t);
    if (a)
      a = castToDouble(a);

    Value *half = ConstantFP::get(context, APFloat(0.5));

    if (v0 && a && t && !vf) {
      // vf = v0 + a*t
      Value *res =
          builder->CreateFAdd(v0, builder->CreateFMul(a, t), "calc_vf");
      printResult("Velocidad final", res, "m/s");
      return res;
    } else if (v0 && a && t && (!xf || !x0)) {
      // d = v0*t + 0.5*a*t^2
      Value *v0t = builder->CreateFMul(v0, t);
      Value *at2 = builder->CreateFMul(a, builder->CreateFMul(t, t));
      Value *term2 = builder->CreateFMul(half, at2);
      Value *res = builder->CreateFAdd(v0t, term2, "calc_d");
      printResult("Desplazamiento xf-x0", res, "m");
      return res;
    } else if (x0 && xf && v0 && vf && (!t || !a)) {
      // a = (vf^2 - v0^2) / (2*(xf-x0))
      Value *vf2 = builder->CreateFMul(vf, vf);
      Value *v02 = builder->CreateFMul(v0, v0);
      Value *num = builder->CreateFSub(vf2, v02);
      Value *dx = builder->CreateFSub(xf, x0);
      Value *den =
          builder->CreateFMul(ConstantFP::get(context, APFloat(2.0)), dx);
      Value *res = builder->CreateFDiv(num, den, "calc_a");
      printResult("Aceleración", res, "m/s^2");
      return res;
    } else if (a && t && !vf && (!x0 || !xf)) {
      // delta_v = a*t
      Value *res = builder->CreateFMul(a, t, "calc_dv");
      printResult("Variación de velocidad vf - v0", res, "m/s");
      return res;
    } else if (!v0 && a && t && vf) {
      // v0 = vf - a*t
      Value *at = builder->CreateFMul(a, t);
      Value *res = builder->CreateFSub(vf, at, "calc_v0");
      printResult("Velocidad inicial", res, "m/s");
      return res;
    } else if (a && t && vf && (!x0 || !xf)) {
      // d = vf*t - 0.5*a*t^2
      Value *vft = builder->CreateFMul(vf, t);
      Value *at2 = builder->CreateFMul(a, builder->CreateFMul(t, t));
      Value *term2 = builder->CreateFMul(half, at2);
      Value *res = builder->CreateFSub(vft, term2, "calc_d");
      printResult("Desplazamiento xf-x0", res, "m");
      return res;
    }

    std::cerr << "Variables insuficientes para MRUV" << std::endl;
    return (Value *)nullptr;
  }

  std::any operTrabajMec(std::map<std::string, Value *> &pars) {
    Value *f = pars["f"];
    Value *d = pars["d"];
    Value *w = pars["w"];
    Value *v = pars["v"];
    Value *t = pars["t"];
    Value *m = pars["m"];
    Value *a = pars["a"];
    Value *p = pars["p"];

    if (f)
      f = castToDouble(f);
    if (d)
      d = castToDouble(d);
    if (w)
      w = castToDouble(w);
    if (v)
      v = castToDouble(v);
    if (t)
      t = castToDouble(t);
    if (m)
      m = castToDouble(m);
    if (a)
      a = castToDouble(a);
    if (p)
      p = castToDouble(p);

    if (!w && f && d) {
      Value *res = builder->CreateFMul(f, d, "calc_w");
      printResult("Trabajo", res, "J");
      return res;
    } else if (!f && w && d) {
      Value *res = builder->CreateFDiv(w, d, "calc_f");
      printResult("Fuerza", res, "N");
      return res;
    } else if (!d && w && f) {
      Value *res = builder->CreateFDiv(w, f, "calc_d");
      printResult("Desplazamiento", res, "m");
      return res;
    } else if (!f && m && a) {
      Value *res = builder->CreateFMul(m, a, "calc_f");
      printResult("Fuerza (Newton)", res, "N");
      return res;
    } else if (!a && f && m) {
      Value *res = builder->CreateFDiv(f, m, "calc_a");
      printResult("Aceleración", res, "m/s^2");
      return res;
    } else if (!v && d && t) {
      Value *res = builder->CreateFDiv(d, t, "calc_v");
      printResult("Velocidad", res, "m/s");
      return res;
    } else if (!d && v && t) {
      Value *res = builder->CreateFMul(v, t, "calc_d");
      printResult("Desplazamiento", res, "m");
      return res;
    } else if (!t && d && v) {
      Value *res = builder->CreateFDiv(d, v, "calc_t");
      printResult("Tiempo", res, "s");
      return res;
    } else if (!p && m && v) {
      Value *res = builder->CreateFMul(m, v, "calc_p");
      printResult("Momento lineal", res, "N*m");
      return res;
    } else if (!v && p && m) {
      Value *res = builder->CreateFDiv(p, m, "calc_v");
      printResult("Velocidad", res, "m/s");
      return res;
    } else if (!m && p && v) {
      Value *res = builder->CreateFDiv(p, v, "calc_m");
      printResult("Masa", res, "kg");
      return res;
    } else if (!w && m && v) {
      // W = 0.5 * m * v^2
      Value *half = ConstantFP::get(context, APFloat(0.5));
      Value *v2 = builder->CreateFMul(v, v);
      Value *res =
          builder->CreateFMul(half, builder->CreateFMul(m, v2), "calc_w_ec");
      printResult("Trabajo (Ec)", res, "J");
      return res;
    }
    std::cerr << "Variables insuficientes para Trabajo Mecánico" << std::endl;
    return (Value *)nullptr;
  }

  std::any operMCeleste(std::map<std::string, Value *> &pars) {
    Value *m1 = pars["m1"];
    Value *m2 = pars["m2"];
    Value *rad = pars["rad"];
    Value *v = pars["v"];
    Value *F = pars["F"];
    Value *T = pars["T"];

    Value *G = ConstantFP::get(context, APFloat(6.67430e-11));
    Value *TwoPi = ConstantFP::get(context, APFloat(2.0 * 3.14159265359));
    Value *FourPi2 =
        ConstantFP::get(context, APFloat(4.0 * 3.14159265359 * 3.14159265359));

    if (m1)
      m1 = castToDouble(m1);
    if (m2)
      m2 = castToDouble(m2);
    if (rad)
      rad = castToDouble(rad);
    if (v)
      v = castToDouble(v);
    if (F)
      F = castToDouble(F);
    if (T)
      T = castToDouble(T);

    if (!F && m1 && m2 && rad) {
      // F = G * m1 * m2 / rad^2
      Value *num = builder->CreateFMul(G, builder->CreateFMul(m1, m2));
      Value *den = builder->CreateFMul(rad, rad);
      Value *res = builder->CreateFDiv(num, den, "calc_F");
      printResult("Fuerza gravitatoria", res, "N");
      return res;
    } else if (!rad && F && m1 && m2) {
      // r = sqrt(G*m1*m2/F)
      Value *num = builder->CreateFMul(G, builder->CreateFMul(m1, m2));
      Value *frac = builder->CreateFDiv(num, F);
      Function *sqrtFunc = Intrinsic::getOrInsertDeclaration(
          module.get(), Intrinsic::sqrt, {Type::getDoubleTy(context)});
      Value *res = builder->CreateCall(sqrtFunc, {frac}, "calc_r");
      printResult("Radio orbital", res, "m");
      return res;
    } else if (!v && m1 && rad) {
      // v = sqrt(G*m1/r)
      Value *num = builder->CreateFMul(G, m1);
      Value *frac = builder->CreateFDiv(num, rad);
      Function *sqrtFunc = Intrinsic::getOrInsertDeclaration(
          module.get(), Intrinsic::sqrt, {Type::getDoubleTy(context)});
      Value *res = builder->CreateCall(sqrtFunc, {frac}, "calc_v");
      printResult("Velocidad orbital", res, "m/s");
      return res;
    } else if (!rad && m1 && v) {
      // r = G*m1/v^2
      Value *num = builder->CreateFMul(G, m1);
      Value *den = builder->CreateFMul(v, v);
      Value *res = builder->CreateFDiv(num, den, "calc_r");
      printResult("Radio orbital", res, "m");
      return res;
    } else if (!T && rad && v) {
      // T = 2pi*r/v
      Value *num = builder->CreateFMul(TwoPi, rad);
      Value *res = builder->CreateFDiv(num, v, "calc_T");
      printResult("Periodo orbital", res, "s");
      return res;
    } else if (!v && rad && T) {
      // v = 2pi*r/T
      Value *num = builder->CreateFMul(TwoPi, rad);
      Value *res = builder->CreateFDiv(num, T, "calc_v");
      printResult("Velocidad orbital", res, "m/s");
      return res;
    } else if (!rad && m1 && T) {
      // r = (G*m1*T^2 / (4pi^2))^(1/3)
      Value *T2 = builder->CreateFMul(T, T);
      Value *num = builder->CreateFMul(G, builder->CreateFMul(m1, T2));
      Value *frac = builder->CreateFDiv(num, FourPi2);
      Function *powFunc = Intrinsic::getOrInsertDeclaration(
          module.get(), Intrinsic::pow, {Type::getDoubleTy(context)});
      Value *oneThird = ConstantFP::get(context, APFloat(1.0 / 3.0));
      Value *res = builder->CreateCall(powFunc, {frac, oneThird}, "calc_r");
      printResult("Radio orbital", res, "m");
      return res;
    } else if (!T && rad && m1) {
      // T = sqrt(4pi^2 * r^3 / (G*m1))
      Function *powFunc = Intrinsic::getOrInsertDeclaration(
          module.get(), Intrinsic::pow, {Type::getDoubleTy(context)});
      Value *r3 = builder->CreateCall(
          powFunc, {rad, ConstantFP::get(context, APFloat(3.0))});
      Value *num = builder->CreateFMul(FourPi2, r3);
      Value *den = builder->CreateFMul(G, m1);
      Value *frac = builder->CreateFDiv(num, den);
      Function *sqrtFunc = Intrinsic::getOrInsertDeclaration(
          module.get(), Intrinsic::sqrt, {Type::getDoubleTy(context)});
      Value *res = builder->CreateCall(sqrtFunc, {frac}, "calc_T");
      printResult("Periodo orbital", res, "s");
      return res;
    }
    std::cerr << "Variables insuficientes para Mecánica Celeste" << std::endl;
    return (Value *)nullptr;
  }


  std::any operMAS(std::map<std::string, Value *> &pars) {
    Value *A = pars["A"];
    Value *f = pars["f"];
    Value *t = pars["t"];
    Value *w = pars["w"];
    Value *T = pars["T"];
    Value *m = pars["m"];
    Value *x = pars["x"];
    Value *v = pars["v"];
    Value *a = pars["a"];
    Value *k = pars["k"];
    Value *Ep = pars["Ep"];
    Value *Ec = pars["Ec"];
    Value *Em = pars["Em"];
    Value *phi = pars["phi"];

    if (A)
      A = castToDouble(A);
    if (f)
      f = castToDouble(f);
    if (t)
      t = castToDouble(t);
    if (w)
      w = castToDouble(w);
    if (T)
      T = castToDouble(T);
    if (m)
      m = castToDouble(m);
    if (x)
      x = castToDouble(x);
    if (v)
      v = castToDouble(v);
    if (a)
      a = castToDouble(a);
    if (k)
      k = castToDouble(k);
    if (Ep)
      Ep = castToDouble(Ep);
    if (Ec)
      Ec = castToDouble(Ec);
    if (Em)
      Em = castToDouble(Em);
    if (phi)
      phi = castToDouble(phi);
    else
      phi = ConstantFP::get(context, APFloat(0.0));

    Value *TwoPi = ConstantFP::get(context, APFloat(2.0 * 3.14159265359));

    if (!w && f) {
      Value *res = builder->CreateFMul(TwoPi, f, "calc_w");
      printResult("Velocidad angular", res, "rad/s");
      return res;
    } else if (!f && w) {
      Value *res = builder->CreateFDiv(w, TwoPi, "calc_f");
      printResult("Frecuencia", res, "Hz");
      return res;
    } else if (!T && f) {
      Value *one = ConstantFP::get(context, APFloat(1.0));
      Value *res = builder->CreateFDiv(one, f, "calc_T");
      printResult("Periodo", res, "s");
      return res;
    } else if (!f && T) {
      Value *one = ConstantFP::get(context, APFloat(1.0));
      Value *res = builder->CreateFDiv(one, T, "calc_f");
      printResult("Frecuencia", res, "Hz");
      return res;
    } else if (!x && A && w && t) {
      // x = A * cos(w*t + phi)
      Value *arg = builder->CreateFAdd(builder->CreateFMul(w, t), phi);
      Function *cosFunc = Intrinsic::getDeclaration(
          module.get(), Intrinsic::cos, {Type::getDoubleTy(context)});
      Value *cosVal = builder->CreateCall(cosFunc, {arg});
      Value *res = builder->CreateFMul(A, cosVal, "calc_x");
      printResult("Posición x(t)", res, "m");
      return res;
    } else if (!v && A && w && t) {
      // v = -A * w * sin(w*t + phi)
      Value *arg = builder->CreateFAdd(builder->CreateFMul(w, t), phi);
      Function *sinFunc = Intrinsic::getDeclaration(
          module.get(), Intrinsic::sin, {Type::getDoubleTy(context)});
      Value *sinVal = builder->CreateCall(sinFunc, {arg});
      Value *negAw = builder->CreateFNeg(builder->CreateFMul(A, w));
      Value *res = builder->CreateFMul(negAw, sinVal, "calc_v");
      printResult("Velocidad v(t)", res, "m/s");
      return res;
    } else if (!a && A && w && t) {
      // a = -A * w^2 * cos(w*t + phi)
      Value *arg = builder->CreateFAdd(builder->CreateFMul(w, t), phi);
      Function *cosFunc = Intrinsic::getDeclaration(
          module.get(), Intrinsic::cos, {Type::getDoubleTy(context)});
      Value *cosVal = builder->CreateCall(cosFunc, {arg});
      Value *w2 = builder->CreateFMul(w, w);
      Value *negAw2 = builder->CreateFNeg(builder->CreateFMul(A, w2));
      Value *res = builder->CreateFMul(negAw2, cosVal, "calc_a");
      printResult("Aceleración a(t)", res, "m/s^2");
      return res;
    } else if (!k && m && w) {
      // k = m * w^2
      Value *w2 = builder->CreateFMul(w, w);
      Value *res = builder->CreateFMul(m, w2, "calc_k");
      printResult("Constante de resorte", res, "N/m");
      return res;
    } else if (!Ep && k && x) {
      // Ep = 0.5 * k * x^2
      Value *half = ConstantFP::get(context, APFloat(0.5));
      Value *x2 = builder->CreateFMul(x, x);
      Value *res =
          builder->CreateFMul(half, builder->CreateFMul(k, x2), "calc_Ep");
      printResult("Energía potencial", res, "J");
      return res;
    } else if (!Ec && m && v) {
      // Ec = 0.5 * m * v^2
      Value *half = ConstantFP::get(context, APFloat(0.5));
      Value *v2 = builder->CreateFMul(v, v);
      Value *res =
          builder->CreateFMul(half, builder->CreateFMul(m, v2), "calc_Ec");
      printResult("Energía cinética", res, "J");
      return res;
    } else if (!Em && Ep && Ec) {
      Value *res = builder->CreateFAdd(Ep, Ec, "calc_Em");
      printResult("Energía mecánica", res, "J");
      return res;
    }
    std::cerr << "Variables insuficientes para MAS" << std::endl;
    return (Value *)nullptr;
  }

  std::any operFluidos(std::map<std::string, Value *> &pars) {
    Value *v = pars["v"];
    Value *d = pars["d"];
    Value *P = pars["P"];
    Value *h = pars["h"];
    Value *A = pars["A"];
    Value *Q = pars["Q"];
    Value *F = pars["F"];
    Value *g = ConstantFP::get(context, APFloat(9.81));

    if (v)
      v = castToDouble(v);
    if (d)
      d = castToDouble(d);
    if (P)
      P = castToDouble(P);
    if (h)
      h = castToDouble(h);
    if (A)
      A = castToDouble(A);
    if (Q)
      Q = castToDouble(Q);
    if (F)
      F = castToDouble(F);

    if (!Q && A && v) {
      Value *res = builder->CreateFMul(A, v, "calc_Q");
      printResult("Caudal", res, "m^3/s");
      return res;
    } else if (!v && Q && A) {
      Value *res = builder->CreateFDiv(Q, A, "calc_v");
      printResult("Velocidad", res, "m/s");
      return res;
    } else if (!P && d && h) {
      Value *res = builder->CreateFMul(d, builder->CreateFMul(g, h), "calc_P");
      printResult("Presión hidrostática", res, "Pa");
      return res;
    } else if (!F && d && h && A) {
      Value *res = builder->CreateFMul(
          d, builder->CreateFMul(g, builder->CreateFMul(h, A)), "calc_F");
      printResult("Fuerza de empuje", res, "N");
      return res;
    }
    std::cerr << "Variables insuficientes para Fluidos" << std::endl;
    return (Value *)nullptr;
  }

  std::any operMCU(std::map<std::string, Value *> &pars) {
    Value *rad = pars["rad"];
    Value *v = pars["v"];
    Value *m = pars["m"];
    Value *F = pars["F"];
    Value *f = pars["f"];
    Value *a = pars["a"];
    Value *w = pars["w"];
    Value *T = pars["T"];

    if (rad)
      rad = castToDouble(rad);
    if (v)
      v = castToDouble(v);
    if (m)
      m = castToDouble(m);
    if (F)
      F = castToDouble(F);
    if (f)
      f = castToDouble(f);
    if (a)
      a = castToDouble(a);
    if (w)
      w = castToDouble(w);
    if (T)
      T = castToDouble(T);

    if (!T && f) {
      Value *one = ConstantFP::get(context, APFloat(1.0));
      Value *res = builder->CreateFDiv(one, f, "calc_T");
      printResult("Periodo", res, "s");
      return res;
    } else if (!f && T) {
      Value *one = ConstantFP::get(context, APFloat(1.0));
      Value *res = builder->CreateFDiv(one, T, "calc_f");
      printResult("Frecuencia", res, "Hz");
      return res;
    } else if (!a && v && rad) {
      Value *v2 = builder->CreateFMul(v, v);
      Value *res = builder->CreateFDiv(v2, rad, "calc_a");
      printResult("Aceleración centrípeta", res, "m/s^2");
      return res;
    } else if (!F && m && v && rad) {
      Value *v2 = builder->CreateFMul(v, v);
      Value *mv2 = builder->CreateFMul(m, v2);
      Value *res = builder->CreateFDiv(mv2, rad, "calc_F");
      printResult("Fuerza centrípeta", res, "N");
      return res;
    } else if (!w && v && rad) {
      Value *res = builder->CreateFDiv(v, rad, "calc_w");
      printResult("Velocidad angular", res, "rad/s");
      return res;
    } else if (!v && w && rad) {
      Value *res = builder->CreateFMul(w, rad, "calc_v");
      printResult("Velocidad tangencial", res, "m/s");
      return res;
    }
    std::cerr << "Variables insuficientes para MCU" << std::endl;
    return (Value *)nullptr;
  }

  std::any operEnergMec(std::map<std::string, Value *> &pars) {
    Value *h = pars["h"];
    Value *v = pars["v"];
    Value *m = pars["m"];
    Value *a = pars["a"];
    Value *w = pars["w"];
    Value *p = pars["p"];
    Value *F = pars["F"];
    Value *Ec = pars["Ec"];
    Value *Ep = pars["Ep"];
    Value *Em = pars["Em"];
    Value *g = ConstantFP::get(context, APFloat(9.81));

    if (h)
      h = castToDouble(h);
    if (v)
      v = castToDouble(v);
    if (m)
      m = castToDouble(m);
    if (a)
      a = castToDouble(a);
    if (w)
      w = castToDouble(w);
    if (p)
      p = castToDouble(p);
    if (F)
      F = castToDouble(F);
    if (Ec)
      Ec = castToDouble(Ec);
    if (Ep)
      Ep = castToDouble(Ep);
    if (Em)
      Em = castToDouble(Em);

    if (!Ec && m && v) {
      Value *half = ConstantFP::get(context, APFloat(0.5));
      Value *v2 = builder->CreateFMul(v, v);
      Value *res =
          builder->CreateFMul(half, builder->CreateFMul(m, v2), "calc_Ec");
      printResult("Energía cinética", res, "J");
      return res;
    } else if (!Ep && m && h) {
      Value *res = builder->CreateFMul(m, builder->CreateFMul(g, h), "calc_Ep");
      printResult("Energía potencial", res, "J");
      return res;
    } else if (!Em && Ec && Ep) {
      Value *res = builder->CreateFAdd(Ec, Ep, "calc_Em");
      printResult("Energía mecánica", res, "J");
      return res;
    } else if (!v && p && m) {
      Value *res = builder->CreateFDiv(p, m, "calc_v");
      printResult("Velocidad desde momento", res, "m/s");
      return res;
    } else if (!p && m && v) {
      Value *res = builder->CreateFMul(m, v, "calc_p");
      printResult("Momento lineal", res, "N*m");
      return res;
    } else if (!a && F && m) {
      Value *res = builder->CreateFDiv(F, m, "calc_a");
      printResult("Aceleración", res, "m/s^2");
      return res;
    } else if (!w && F && h) {
      Value *res = builder->CreateFMul(F, h, "calc_w");
      printResult("Trabajo", res, "J");
      return res;
    }
    std::cerr << "Variables insuficientes para Energía Mecánica" << std::endl;
    return (Value *)nullptr;
  }

  virtual std::any visitExprFis(CalcFisParser::ExprFisContext *ctx) override {
    return visit(ctx->fisExpr());
  }
};
