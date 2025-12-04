
// Generated from /mnt/c/Users/Mauricio/Documents/SEXTO CICLO/Compiladores/TF/src/CalcFis.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  CalcFisParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, ADD = 14, 
    SUB = 15, MUL = 16, DIV = 17, POW = 18, MOD = 19, LOG = 20, ROOT = 21, 
    LPAR = 22, RPAR = 23, COS = 24, SEN = 25, TG = 26, SEC = 27, CSC = 28, 
    CTG = 29, ID = 30, INT = 31, FLOAT = 32, WS = 33
  };

  enum {
    RuleProg = 0, RuleStatement = 1, RuleExpr = 2, RuleFisExpr = 3, RuleOper = 4, 
    RulePars = 5, RulePar = 6, RuleMatExpr = 7, RuleFun = 8, RuleNum = 9
  };

  explicit CalcFisParser(antlr4::TokenStream *input);

  CalcFisParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~CalcFisParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgContext;
  class StatementContext;
  class ExprContext;
  class FisExprContext;
  class OperContext;
  class ParsContext;
  class ParContext;
  class MatExprContext;
  class FunContext;
  class NumContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgContext* prog();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StatementContext() = default;
    void copyFrom(StatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  StmtExprContext : public StatementContext {
  public:
    StmtExprContext(StatementContext *ctx);

    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignStatContext : public StatementContext {
  public:
    AssignStatContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *ID();
    ExprContext *expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StatementContext* statement();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ExprFisContext : public ExprContext {
  public:
    ExprFisContext(ExprContext *ctx);

    FisExprContext *fisExpr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprMatContext : public ExprContext {
  public:
    ExprMatContext(ExprContext *ctx);

    MatExprContext *matExpr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();

  class  FisExprContext : public antlr4::ParserRuleContext {
  public:
    FisExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FisExprContext() = default;
    void copyFrom(FisExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  OperParsContext : public FisExprContext {
  public:
    OperParsContext(FisExprContext *ctx);

    OperContext *oper();
    antlr4::tree::TerminalNode *LPAR();
    ParsContext *pars();
    antlr4::tree::TerminalNode *RPAR();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FisExprContext* fisExpr();

  class  OperContext : public antlr4::ParserRuleContext {
  public:
    OperContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    OperContext() = default;
    void copyFrom(OperContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  OperFluidosContext : public OperContext {
  public:
    OperFluidosContext(OperContext *ctx);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OperMRUContext : public OperContext {
  public:
    OperMRUContext(OperContext *ctx);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OperMRUVContext : public OperContext {
  public:
    OperMRUVContext(OperContext *ctx);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OperTrabajMecContext : public OperContext {
  public:
    OperTrabajMecContext(OperContext *ctx);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OperMCelesteContext : public OperContext {
  public:
    OperMCelesteContext(OperContext *ctx);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OperMASContext : public OperContext {
  public:
    OperMASContext(OperContext *ctx);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OperMCUContext : public OperContext {
  public:
    OperMCUContext(OperContext *ctx);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OperCaidaLibreContext : public OperContext {
  public:
    OperCaidaLibreContext(OperContext *ctx);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OperEnergMecContext : public OperContext {
  public:
    OperEnergMecContext(OperContext *ctx);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  OperContext* oper();

  class  ParsContext : public antlr4::ParserRuleContext {
  public:
    ParsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ParsContext() = default;
    void copyFrom(ParsContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ParParContext : public ParsContext {
  public:
    ParParContext(ParsContext *ctx);

    std::vector<ParContext *> par();
    ParContext* par(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ParsContext* pars();

  class  ParContext : public antlr4::ParserRuleContext {
  public:
    ParContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ParContext() = default;
    void copyFrom(ParContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DeclIDUnknownContext : public ParContext {
  public:
    DeclIDUnknownContext(ParContext *ctx);

    antlr4::tree::TerminalNode *ID();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DeclIDContext : public ParContext {
  public:
    DeclIDContext(ParContext *ctx);

    antlr4::tree::TerminalNode *ID();
    MatExprContext *matExpr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ParContext* par();

  class  MatExprContext : public antlr4::ParserRuleContext {
  public:
    MatExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    MatExprContext() = default;
    void copyFrom(MatExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  MinMatExprContext : public MatExprContext {
  public:
    MinMatExprContext(MatExprContext *ctx);

    antlr4::tree::TerminalNode *SUB();
    MatExprContext *matExpr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FunMatExprContext : public MatExprContext {
  public:
    FunMatExprContext(MatExprContext *ctx);

    FunContext *fun();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PowerMatExprContext : public MatExprContext {
  public:
    PowerMatExprContext(MatExprContext *ctx);

    std::vector<MatExprContext *> matExpr();
    MatExprContext* matExpr(size_t i);
    antlr4::tree::TerminalNode *POW();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenMatExprContext : public MatExprContext {
  public:
    ParenMatExprContext(MatExprContext *ctx);

    antlr4::tree::TerminalNode *LPAR();
    MatExprContext *matExpr();
    antlr4::tree::TerminalNode *RPAR();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ModMatExprContext : public MatExprContext {
  public:
    ModMatExprContext(MatExprContext *ctx);

    std::vector<MatExprContext *> matExpr();
    MatExprContext* matExpr(size_t i);
    antlr4::tree::TerminalNode *MOD();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RootMatExprContext : public MatExprContext {
  public:
    RootMatExprContext(MatExprContext *ctx);

    std::vector<MatExprContext *> matExpr();
    MatExprContext* matExpr(size_t i);
    antlr4::tree::TerminalNode *ROOT();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MulDivMatExprContext : public MatExprContext {
  public:
    MulDivMatExprContext(MatExprContext *ctx);

    std::vector<MatExprContext *> matExpr();
    MatExprContext* matExpr(size_t i);
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddSubMatExprContext : public MatExprContext {
  public:
    AddSubMatExprContext(MatExprContext *ctx);

    std::vector<MatExprContext *> matExpr();
    MatExprContext* matExpr(size_t i);
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IdMatExprContext : public MatExprContext {
  public:
    IdMatExprContext(MatExprContext *ctx);

    antlr4::tree::TerminalNode *ID();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LogMatExprContext : public MatExprContext {
  public:
    LogMatExprContext(MatExprContext *ctx);

    antlr4::tree::TerminalNode *LOG();
    std::vector<MatExprContext *> matExpr();
    MatExprContext* matExpr(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumMatExprContext : public MatExprContext {
  public:
    NumMatExprContext(MatExprContext *ctx);

    NumContext *num();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  MatExprContext* matExpr();
  MatExprContext* matExpr(int precedence);
  class  FunContext : public antlr4::ParserRuleContext {
  public:
    FunContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FunContext() = default;
    void copyFrom(FunContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  CtgMatExprContext : public FunContext {
  public:
    CtgMatExprContext(FunContext *ctx);

    antlr4::tree::TerminalNode *CTG();
    MatExprContext *matExpr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SenMatExprContext : public FunContext {
  public:
    SenMatExprContext(FunContext *ctx);

    antlr4::tree::TerminalNode *SEN();
    MatExprContext *matExpr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TgMatExprContext : public FunContext {
  public:
    TgMatExprContext(FunContext *ctx);

    antlr4::tree::TerminalNode *TG();
    MatExprContext *matExpr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CscMatExprContext : public FunContext {
  public:
    CscMatExprContext(FunContext *ctx);

    antlr4::tree::TerminalNode *CSC();
    MatExprContext *matExpr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SecMatExprContext : public FunContext {
  public:
    SecMatExprContext(FunContext *ctx);

    antlr4::tree::TerminalNode *SEC();
    MatExprContext *matExpr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CosMatExprContext : public FunContext {
  public:
    CosMatExprContext(FunContext *ctx);

    antlr4::tree::TerminalNode *COS();
    MatExprContext *matExpr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FunContext* fun();

  class  NumContext : public antlr4::ParserRuleContext {
  public:
    NumContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *FLOAT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumContext* num();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool matExprSempred(MatExprContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

