
// Generated from /mnt/c/Users/Mauricio/Documents/SEXTO CICLO/Compiladores/TF/src/CalcFis.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "CalcFisParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by CalcFisParser.
 */
class  CalcFisVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CalcFisParser.
   */
    virtual std::any visitProg(CalcFisParser::ProgContext *context) = 0;

    virtual std::any visitAssignStat(CalcFisParser::AssignStatContext *context) = 0;

    virtual std::any visitStmtExpr(CalcFisParser::StmtExprContext *context) = 0;

    virtual std::any visitExprFis(CalcFisParser::ExprFisContext *context) = 0;

    virtual std::any visitExprMat(CalcFisParser::ExprMatContext *context) = 0;

    virtual std::any visitOperPars(CalcFisParser::OperParsContext *context) = 0;

    virtual std::any visitOperCaidaLibre(CalcFisParser::OperCaidaLibreContext *context) = 0;

    virtual std::any visitOperMRU(CalcFisParser::OperMRUContext *context) = 0;

    virtual std::any visitOperMRUV(CalcFisParser::OperMRUVContext *context) = 0;

    virtual std::any visitOperTrabajMec(CalcFisParser::OperTrabajMecContext *context) = 0;

    virtual std::any visitOperMCeleste(CalcFisParser::OperMCelesteContext *context) = 0;

    virtual std::any visitOperMAS(CalcFisParser::OperMASContext *context) = 0;

    virtual std::any visitOperFluidos(CalcFisParser::OperFluidosContext *context) = 0;

    virtual std::any visitOperMCU(CalcFisParser::OperMCUContext *context) = 0;

    virtual std::any visitOperEnergMec(CalcFisParser::OperEnergMecContext *context) = 0;

    virtual std::any visitParPar(CalcFisParser::ParParContext *context) = 0;

    virtual std::any visitDeclID(CalcFisParser::DeclIDContext *context) = 0;

    virtual std::any visitDeclIDUnknown(CalcFisParser::DeclIDUnknownContext *context) = 0;

    virtual std::any visitMinMatExpr(CalcFisParser::MinMatExprContext *context) = 0;

    virtual std::any visitFunMatExpr(CalcFisParser::FunMatExprContext *context) = 0;

    virtual std::any visitPowerMatExpr(CalcFisParser::PowerMatExprContext *context) = 0;

    virtual std::any visitParenMatExpr(CalcFisParser::ParenMatExprContext *context) = 0;

    virtual std::any visitModMatExpr(CalcFisParser::ModMatExprContext *context) = 0;

    virtual std::any visitRootMatExpr(CalcFisParser::RootMatExprContext *context) = 0;

    virtual std::any visitMulDivMatExpr(CalcFisParser::MulDivMatExprContext *context) = 0;

    virtual std::any visitAddSubMatExpr(CalcFisParser::AddSubMatExprContext *context) = 0;

    virtual std::any visitIdMatExpr(CalcFisParser::IdMatExprContext *context) = 0;

    virtual std::any visitLogMatExpr(CalcFisParser::LogMatExprContext *context) = 0;

    virtual std::any visitNumMatExpr(CalcFisParser::NumMatExprContext *context) = 0;

    virtual std::any visitCosMatExpr(CalcFisParser::CosMatExprContext *context) = 0;

    virtual std::any visitSenMatExpr(CalcFisParser::SenMatExprContext *context) = 0;

    virtual std::any visitTgMatExpr(CalcFisParser::TgMatExprContext *context) = 0;

    virtual std::any visitSecMatExpr(CalcFisParser::SecMatExprContext *context) = 0;

    virtual std::any visitCscMatExpr(CalcFisParser::CscMatExprContext *context) = 0;

    virtual std::any visitCtgMatExpr(CalcFisParser::CtgMatExprContext *context) = 0;

    virtual std::any visitNum(CalcFisParser::NumContext *context) = 0;


};

