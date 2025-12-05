
// Generated from /mnt/c/Users/Mauricio/Documents/SEXTO CICLO/Compiladores/TF/CalcPhys/src/CalcFis.g4 by ANTLR 4.13.2


#include "CalcFisVisitor.h"

#include "CalcFisParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct CalcFisParserStaticData final {
  CalcFisParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CalcFisParserStaticData(const CalcFisParserStaticData&) = delete;
  CalcFisParserStaticData(CalcFisParserStaticData&&) = delete;
  CalcFisParserStaticData& operator=(const CalcFisParserStaticData&) = delete;
  CalcFisParserStaticData& operator=(CalcFisParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag calcfisParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<CalcFisParserStaticData> calcfisParserStaticData = nullptr;

void calcfisParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (calcfisParserStaticData != nullptr) {
    return;
  }
#else
  assert(calcfisParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CalcFisParserStaticData>(
    std::vector<std::string>{
      "prog", "statement", "expr", "printExpr", "stringExpr", "fisExpr", 
      "oper", "pars", "par", "matExpr", "fun", "num"
    },
    std::vector<std::string>{
      "", "'='", "';'", "'cl'", "'mru'", "'mruv'", "'tm'", "'mcel'", "'mas'", 
      "'flu'", "'mcu'", "'em'", "','", "'\\u003F'", "'+'", "'-'", "'*'", 
      "'/'", "'pot'", "'%'", "'log'", "'r'", "'('", "')'", "'cos'", "'sen'", 
      "'tg'", "'sec'", "'csc'", "'ctg'", "'ppp'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "ADD", "SUB", 
      "MUL", "DIV", "POW", "MOD", "LOG", "ROOT", "LPAR", "RPAR", "COS", 
      "SEN", "TG", "SEC", "CSC", "CTG", "PRINT", "ID", "INT", "FLOAT", "STRING", 
      "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,35,145,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,1,0,5,0,26,8,0,10,0,12,0,29,
  	9,0,1,0,1,0,1,1,1,1,1,1,1,1,3,1,37,8,1,1,1,3,1,40,8,1,1,2,1,2,1,2,1,2,
  	3,2,46,8,2,1,3,1,3,1,3,1,3,4,3,52,8,3,11,3,12,3,53,1,3,1,3,1,4,1,4,1,
  	5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,3,6,74,8,6,1,7,
  	1,7,1,7,5,7,79,8,7,10,7,12,7,82,9,7,1,8,1,8,1,8,1,8,1,8,1,8,3,8,90,8,
  	8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,3,9,107,
  	8,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,5,9,124,
  	8,9,10,9,12,9,127,9,9,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,
  	10,1,10,1,10,3,10,141,8,10,1,11,1,11,1,11,0,1,18,12,0,2,4,6,8,10,12,14,
  	16,18,20,22,0,3,1,0,16,17,1,0,14,15,1,0,32,33,165,0,27,1,0,0,0,2,39,1,
  	0,0,0,4,45,1,0,0,0,6,47,1,0,0,0,8,57,1,0,0,0,10,59,1,0,0,0,12,73,1,0,
  	0,0,14,75,1,0,0,0,16,89,1,0,0,0,18,106,1,0,0,0,20,140,1,0,0,0,22,142,
  	1,0,0,0,24,26,3,2,1,0,25,24,1,0,0,0,26,29,1,0,0,0,27,25,1,0,0,0,27,28,
  	1,0,0,0,28,30,1,0,0,0,29,27,1,0,0,0,30,31,5,0,0,1,31,1,1,0,0,0,32,33,
  	5,31,0,0,33,34,5,1,0,0,34,36,3,4,2,0,35,37,5,2,0,0,36,35,1,0,0,0,36,37,
  	1,0,0,0,37,40,1,0,0,0,38,40,3,4,2,0,39,32,1,0,0,0,39,38,1,0,0,0,40,3,
  	1,0,0,0,41,46,3,10,5,0,42,46,3,18,9,0,43,46,3,6,3,0,44,46,3,8,4,0,45,
  	41,1,0,0,0,45,42,1,0,0,0,45,43,1,0,0,0,45,44,1,0,0,0,46,5,1,0,0,0,47,
  	48,5,30,0,0,48,51,5,22,0,0,49,52,3,4,2,0,50,52,5,34,0,0,51,49,1,0,0,0,
  	51,50,1,0,0,0,52,53,1,0,0,0,53,51,1,0,0,0,53,54,1,0,0,0,54,55,1,0,0,0,
  	55,56,5,23,0,0,56,7,1,0,0,0,57,58,5,34,0,0,58,9,1,0,0,0,59,60,3,12,6,
  	0,60,61,5,22,0,0,61,62,3,14,7,0,62,63,5,23,0,0,63,11,1,0,0,0,64,74,5,
  	3,0,0,65,74,5,4,0,0,66,74,5,5,0,0,67,74,5,6,0,0,68,74,5,7,0,0,69,74,5,
  	8,0,0,70,74,5,9,0,0,71,74,5,10,0,0,72,74,5,11,0,0,73,64,1,0,0,0,73,65,
  	1,0,0,0,73,66,1,0,0,0,73,67,1,0,0,0,73,68,1,0,0,0,73,69,1,0,0,0,73,70,
  	1,0,0,0,73,71,1,0,0,0,73,72,1,0,0,0,74,13,1,0,0,0,75,80,3,16,8,0,76,77,
  	5,12,0,0,77,79,3,16,8,0,78,76,1,0,0,0,79,82,1,0,0,0,80,78,1,0,0,0,80,
  	81,1,0,0,0,81,15,1,0,0,0,82,80,1,0,0,0,83,84,5,31,0,0,84,85,5,1,0,0,85,
  	90,3,18,9,0,86,87,5,31,0,0,87,88,5,1,0,0,88,90,5,13,0,0,89,83,1,0,0,0,
  	89,86,1,0,0,0,90,17,1,0,0,0,91,92,6,9,-1,0,92,93,5,20,0,0,93,94,3,18,
  	9,0,94,95,5,12,0,0,95,96,3,18,9,8,96,107,1,0,0,0,97,98,5,15,0,0,98,107,
  	3,18,9,5,99,107,3,20,10,0,100,107,3,22,11,0,101,107,5,31,0,0,102,103,
  	5,22,0,0,103,104,3,18,9,0,104,105,5,23,0,0,105,107,1,0,0,0,106,91,1,0,
  	0,0,106,97,1,0,0,0,106,99,1,0,0,0,106,100,1,0,0,0,106,101,1,0,0,0,106,
  	102,1,0,0,0,107,125,1,0,0,0,108,109,10,11,0,0,109,110,5,21,0,0,110,124,
  	3,18,9,12,111,112,10,10,0,0,112,113,5,18,0,0,113,124,3,18,9,11,114,115,
  	10,9,0,0,115,116,5,19,0,0,116,124,3,18,9,10,117,118,10,7,0,0,118,119,
  	7,0,0,0,119,124,3,18,9,8,120,121,10,6,0,0,121,122,7,1,0,0,122,124,3,18,
  	9,7,123,108,1,0,0,0,123,111,1,0,0,0,123,114,1,0,0,0,123,117,1,0,0,0,123,
  	120,1,0,0,0,124,127,1,0,0,0,125,123,1,0,0,0,125,126,1,0,0,0,126,19,1,
  	0,0,0,127,125,1,0,0,0,128,129,5,24,0,0,129,141,3,18,9,0,130,131,5,25,
  	0,0,131,141,3,18,9,0,132,133,5,26,0,0,133,141,3,18,9,0,134,135,5,27,0,
  	0,135,141,3,18,9,0,136,137,5,28,0,0,137,141,3,18,9,0,138,139,5,29,0,0,
  	139,141,3,18,9,0,140,128,1,0,0,0,140,130,1,0,0,0,140,132,1,0,0,0,140,
  	134,1,0,0,0,140,136,1,0,0,0,140,138,1,0,0,0,141,21,1,0,0,0,142,143,7,
  	2,0,0,143,23,1,0,0,0,13,27,36,39,45,51,53,73,80,89,106,123,125,140
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  calcfisParserStaticData = std::move(staticData);
}

}

CalcFisParser::CalcFisParser(TokenStream *input) : CalcFisParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

CalcFisParser::CalcFisParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  CalcFisParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *calcfisParserStaticData->atn, calcfisParserStaticData->decisionToDFA, calcfisParserStaticData->sharedContextCache, options);
}

CalcFisParser::~CalcFisParser() {
  delete _interpreter;
}

const atn::ATN& CalcFisParser::getATN() const {
  return *calcfisParserStaticData->atn;
}

std::string CalcFisParser::getGrammarFileName() const {
  return "CalcFis.g4";
}

const std::vector<std::string>& CalcFisParser::getRuleNames() const {
  return calcfisParserStaticData->ruleNames;
}

const dfa::Vocabulary& CalcFisParser::getVocabulary() const {
  return calcfisParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CalcFisParser::getSerializedATN() const {
  return calcfisParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

CalcFisParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CalcFisParser::ProgContext::EOF() {
  return getToken(CalcFisParser::EOF, 0);
}

std::vector<CalcFisParser::StatementContext *> CalcFisParser::ProgContext::statement() {
  return getRuleContexts<CalcFisParser::StatementContext>();
}

CalcFisParser::StatementContext* CalcFisParser::ProgContext::statement(size_t i) {
  return getRuleContext<CalcFisParser::StatementContext>(i);
}


size_t CalcFisParser::ProgContext::getRuleIndex() const {
  return CalcFisParser::RuleProg;
}


std::any CalcFisParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

CalcFisParser::ProgContext* CalcFisParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, CalcFisParser::RuleProg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(27);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 34348240888) != 0)) {
      setState(24);
      statement();
      setState(29);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(30);
    match(CalcFisParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

CalcFisParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcFisParser::StatementContext::getRuleIndex() const {
  return CalcFisParser::RuleStatement;
}

void CalcFisParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- StmtExprContext ------------------------------------------------------------------

CalcFisParser::ExprContext* CalcFisParser::StmtExprContext::expr() {
  return getRuleContext<CalcFisParser::ExprContext>(0);
}

CalcFisParser::StmtExprContext::StmtExprContext(StatementContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::StmtExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitStmtExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignStatContext ------------------------------------------------------------------

tree::TerminalNode* CalcFisParser::AssignStatContext::ID() {
  return getToken(CalcFisParser::ID, 0);
}

CalcFisParser::ExprContext* CalcFisParser::AssignStatContext::expr() {
  return getRuleContext<CalcFisParser::ExprContext>(0);
}

CalcFisParser::AssignStatContext::AssignStatContext(StatementContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::AssignStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitAssignStat(this);
  else
    return visitor->visitChildren(this);
}
CalcFisParser::StatementContext* CalcFisParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, CalcFisParser::RuleStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(39);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CalcFisParser::AssignStatContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(32);
      match(CalcFisParser::ID);
      setState(33);
      match(CalcFisParser::T__0);
      setState(34);
      expr();
      setState(36);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CalcFisParser::T__1) {
        setState(35);
        match(CalcFisParser::T__1);
      }
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CalcFisParser::StmtExprContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(38);
      expr();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

CalcFisParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcFisParser::ExprContext::getRuleIndex() const {
  return CalcFisParser::RuleExpr;
}

void CalcFisParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExprStringContext ------------------------------------------------------------------

CalcFisParser::StringExprContext* CalcFisParser::ExprStringContext::stringExpr() {
  return getRuleContext<CalcFisParser::StringExprContext>(0);
}

CalcFisParser::ExprStringContext::ExprStringContext(ExprContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::ExprStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitExprString(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprPrintContext ------------------------------------------------------------------

CalcFisParser::PrintExprContext* CalcFisParser::ExprPrintContext::printExpr() {
  return getRuleContext<CalcFisParser::PrintExprContext>(0);
}

CalcFisParser::ExprPrintContext::ExprPrintContext(ExprContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::ExprPrintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitExprPrint(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprFisContext ------------------------------------------------------------------

CalcFisParser::FisExprContext* CalcFisParser::ExprFisContext::fisExpr() {
  return getRuleContext<CalcFisParser::FisExprContext>(0);
}

CalcFisParser::ExprFisContext::ExprFisContext(ExprContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::ExprFisContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitExprFis(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprMatContext ------------------------------------------------------------------

CalcFisParser::MatExprContext* CalcFisParser::ExprMatContext::matExpr() {
  return getRuleContext<CalcFisParser::MatExprContext>(0);
}

CalcFisParser::ExprMatContext::ExprMatContext(ExprContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::ExprMatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitExprMat(this);
  else
    return visitor->visitChildren(this);
}
CalcFisParser::ExprContext* CalcFisParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 4, CalcFisParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(45);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CalcFisParser::T__2:
      case CalcFisParser::T__3:
      case CalcFisParser::T__4:
      case CalcFisParser::T__5:
      case CalcFisParser::T__6:
      case CalcFisParser::T__7:
      case CalcFisParser::T__8:
      case CalcFisParser::T__9:
      case CalcFisParser::T__10: {
        _localctx = _tracker.createInstance<CalcFisParser::ExprFisContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(41);
        fisExpr();
        break;
      }

      case CalcFisParser::SUB:
      case CalcFisParser::LOG:
      case CalcFisParser::LPAR:
      case CalcFisParser::COS:
      case CalcFisParser::SEN:
      case CalcFisParser::TG:
      case CalcFisParser::SEC:
      case CalcFisParser::CSC:
      case CalcFisParser::CTG:
      case CalcFisParser::ID:
      case CalcFisParser::INT:
      case CalcFisParser::FLOAT: {
        _localctx = _tracker.createInstance<CalcFisParser::ExprMatContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(42);
        matExpr(0);
        break;
      }

      case CalcFisParser::PRINT: {
        _localctx = _tracker.createInstance<CalcFisParser::ExprPrintContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(43);
        printExpr();
        break;
      }

      case CalcFisParser::STRING: {
        _localctx = _tracker.createInstance<CalcFisParser::ExprStringContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(44);
        stringExpr();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintExprContext ------------------------------------------------------------------

CalcFisParser::PrintExprContext::PrintExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcFisParser::PrintExprContext::getRuleIndex() const {
  return CalcFisParser::RulePrintExpr;
}

void CalcFisParser::PrintExprContext::copyFrom(PrintExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ThePrintExprContext ------------------------------------------------------------------

tree::TerminalNode* CalcFisParser::ThePrintExprContext::PRINT() {
  return getToken(CalcFisParser::PRINT, 0);
}

tree::TerminalNode* CalcFisParser::ThePrintExprContext::LPAR() {
  return getToken(CalcFisParser::LPAR, 0);
}

tree::TerminalNode* CalcFisParser::ThePrintExprContext::RPAR() {
  return getToken(CalcFisParser::RPAR, 0);
}

std::vector<CalcFisParser::ExprContext *> CalcFisParser::ThePrintExprContext::expr() {
  return getRuleContexts<CalcFisParser::ExprContext>();
}

CalcFisParser::ExprContext* CalcFisParser::ThePrintExprContext::expr(size_t i) {
  return getRuleContext<CalcFisParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> CalcFisParser::ThePrintExprContext::STRING() {
  return getTokens(CalcFisParser::STRING);
}

tree::TerminalNode* CalcFisParser::ThePrintExprContext::STRING(size_t i) {
  return getToken(CalcFisParser::STRING, i);
}

CalcFisParser::ThePrintExprContext::ThePrintExprContext(PrintExprContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::ThePrintExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitThePrintExpr(this);
  else
    return visitor->visitChildren(this);
}
CalcFisParser::PrintExprContext* CalcFisParser::printExpr() {
  PrintExprContext *_localctx = _tracker.createInstance<PrintExprContext>(_ctx, getState());
  enterRule(_localctx, 6, CalcFisParser::RulePrintExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<CalcFisParser::ThePrintExprContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(47);
    match(CalcFisParser::PRINT);
    setState(48);
    match(CalcFisParser::LPAR);
    setState(51); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(51);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
      case 1: {
        setState(49);
        expr();
        break;
      }

      case 2: {
        setState(50);
        match(CalcFisParser::STRING);
        break;
      }

      default:
        break;
      }
      setState(53); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 34348240888) != 0));
    setState(55);
    match(CalcFisParser::RPAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringExprContext ------------------------------------------------------------------

CalcFisParser::StringExprContext::StringExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcFisParser::StringExprContext::getRuleIndex() const {
  return CalcFisParser::RuleStringExpr;
}

void CalcFisParser::StringExprContext::copyFrom(StringExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TheStringExprContext ------------------------------------------------------------------

tree::TerminalNode* CalcFisParser::TheStringExprContext::STRING() {
  return getToken(CalcFisParser::STRING, 0);
}

CalcFisParser::TheStringExprContext::TheStringExprContext(StringExprContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::TheStringExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitTheStringExpr(this);
  else
    return visitor->visitChildren(this);
}
CalcFisParser::StringExprContext* CalcFisParser::stringExpr() {
  StringExprContext *_localctx = _tracker.createInstance<StringExprContext>(_ctx, getState());
  enterRule(_localctx, 8, CalcFisParser::RuleStringExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<CalcFisParser::TheStringExprContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(57);
    match(CalcFisParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FisExprContext ------------------------------------------------------------------

CalcFisParser::FisExprContext::FisExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcFisParser::FisExprContext::getRuleIndex() const {
  return CalcFisParser::RuleFisExpr;
}

void CalcFisParser::FisExprContext::copyFrom(FisExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- OperParsContext ------------------------------------------------------------------

CalcFisParser::OperContext* CalcFisParser::OperParsContext::oper() {
  return getRuleContext<CalcFisParser::OperContext>(0);
}

tree::TerminalNode* CalcFisParser::OperParsContext::LPAR() {
  return getToken(CalcFisParser::LPAR, 0);
}

CalcFisParser::ParsContext* CalcFisParser::OperParsContext::pars() {
  return getRuleContext<CalcFisParser::ParsContext>(0);
}

tree::TerminalNode* CalcFisParser::OperParsContext::RPAR() {
  return getToken(CalcFisParser::RPAR, 0);
}

CalcFisParser::OperParsContext::OperParsContext(FisExprContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::OperParsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitOperPars(this);
  else
    return visitor->visitChildren(this);
}
CalcFisParser::FisExprContext* CalcFisParser::fisExpr() {
  FisExprContext *_localctx = _tracker.createInstance<FisExprContext>(_ctx, getState());
  enterRule(_localctx, 10, CalcFisParser::RuleFisExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<CalcFisParser::OperParsContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(59);
    oper();
    setState(60);
    match(CalcFisParser::LPAR);
    setState(61);
    pars();
    setState(62);
    match(CalcFisParser::RPAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperContext ------------------------------------------------------------------

CalcFisParser::OperContext::OperContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcFisParser::OperContext::getRuleIndex() const {
  return CalcFisParser::RuleOper;
}

void CalcFisParser::OperContext::copyFrom(OperContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- OperFluidosContext ------------------------------------------------------------------

CalcFisParser::OperFluidosContext::OperFluidosContext(OperContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::OperFluidosContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitOperFluidos(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OperMRUContext ------------------------------------------------------------------

CalcFisParser::OperMRUContext::OperMRUContext(OperContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::OperMRUContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitOperMRU(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OperMRUVContext ------------------------------------------------------------------

CalcFisParser::OperMRUVContext::OperMRUVContext(OperContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::OperMRUVContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitOperMRUV(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OperTrabajMecContext ------------------------------------------------------------------

CalcFisParser::OperTrabajMecContext::OperTrabajMecContext(OperContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::OperTrabajMecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitOperTrabajMec(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OperMCelesteContext ------------------------------------------------------------------

CalcFisParser::OperMCelesteContext::OperMCelesteContext(OperContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::OperMCelesteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitOperMCeleste(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OperMASContext ------------------------------------------------------------------

CalcFisParser::OperMASContext::OperMASContext(OperContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::OperMASContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitOperMAS(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OperMCUContext ------------------------------------------------------------------

CalcFisParser::OperMCUContext::OperMCUContext(OperContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::OperMCUContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitOperMCU(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OperCaidaLibreContext ------------------------------------------------------------------

CalcFisParser::OperCaidaLibreContext::OperCaidaLibreContext(OperContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::OperCaidaLibreContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitOperCaidaLibre(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OperEnergMecContext ------------------------------------------------------------------

CalcFisParser::OperEnergMecContext::OperEnergMecContext(OperContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::OperEnergMecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitOperEnergMec(this);
  else
    return visitor->visitChildren(this);
}
CalcFisParser::OperContext* CalcFisParser::oper() {
  OperContext *_localctx = _tracker.createInstance<OperContext>(_ctx, getState());
  enterRule(_localctx, 12, CalcFisParser::RuleOper);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(73);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CalcFisParser::T__2: {
        _localctx = _tracker.createInstance<CalcFisParser::OperCaidaLibreContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(64);
        match(CalcFisParser::T__2);
        break;
      }

      case CalcFisParser::T__3: {
        _localctx = _tracker.createInstance<CalcFisParser::OperMRUContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(65);
        match(CalcFisParser::T__3);
        break;
      }

      case CalcFisParser::T__4: {
        _localctx = _tracker.createInstance<CalcFisParser::OperMRUVContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(66);
        match(CalcFisParser::T__4);
        break;
      }

      case CalcFisParser::T__5: {
        _localctx = _tracker.createInstance<CalcFisParser::OperTrabajMecContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(67);
        match(CalcFisParser::T__5);
        break;
      }

      case CalcFisParser::T__6: {
        _localctx = _tracker.createInstance<CalcFisParser::OperMCelesteContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(68);
        match(CalcFisParser::T__6);
        break;
      }

      case CalcFisParser::T__7: {
        _localctx = _tracker.createInstance<CalcFisParser::OperMASContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(69);
        match(CalcFisParser::T__7);
        break;
      }

      case CalcFisParser::T__8: {
        _localctx = _tracker.createInstance<CalcFisParser::OperFluidosContext>(_localctx);
        enterOuterAlt(_localctx, 7);
        setState(70);
        match(CalcFisParser::T__8);
        break;
      }

      case CalcFisParser::T__9: {
        _localctx = _tracker.createInstance<CalcFisParser::OperMCUContext>(_localctx);
        enterOuterAlt(_localctx, 8);
        setState(71);
        match(CalcFisParser::T__9);
        break;
      }

      case CalcFisParser::T__10: {
        _localctx = _tracker.createInstance<CalcFisParser::OperEnergMecContext>(_localctx);
        enterOuterAlt(_localctx, 9);
        setState(72);
        match(CalcFisParser::T__10);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParsContext ------------------------------------------------------------------

CalcFisParser::ParsContext::ParsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcFisParser::ParsContext::getRuleIndex() const {
  return CalcFisParser::RulePars;
}

void CalcFisParser::ParsContext::copyFrom(ParsContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParParContext ------------------------------------------------------------------

std::vector<CalcFisParser::ParContext *> CalcFisParser::ParParContext::par() {
  return getRuleContexts<CalcFisParser::ParContext>();
}

CalcFisParser::ParContext* CalcFisParser::ParParContext::par(size_t i) {
  return getRuleContext<CalcFisParser::ParContext>(i);
}

CalcFisParser::ParParContext::ParParContext(ParsContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::ParParContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitParPar(this);
  else
    return visitor->visitChildren(this);
}
CalcFisParser::ParsContext* CalcFisParser::pars() {
  ParsContext *_localctx = _tracker.createInstance<ParsContext>(_ctx, getState());
  enterRule(_localctx, 14, CalcFisParser::RulePars);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<CalcFisParser::ParParContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(75);
    par();
    setState(80);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CalcFisParser::T__11) {
      setState(76);
      match(CalcFisParser::T__11);
      setState(77);
      par();
      setState(82);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParContext ------------------------------------------------------------------

CalcFisParser::ParContext::ParContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcFisParser::ParContext::getRuleIndex() const {
  return CalcFisParser::RulePar;
}

void CalcFisParser::ParContext::copyFrom(ParContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DeclIDUnknownContext ------------------------------------------------------------------

tree::TerminalNode* CalcFisParser::DeclIDUnknownContext::ID() {
  return getToken(CalcFisParser::ID, 0);
}

CalcFisParser::DeclIDUnknownContext::DeclIDUnknownContext(ParContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::DeclIDUnknownContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitDeclIDUnknown(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclIDContext ------------------------------------------------------------------

tree::TerminalNode* CalcFisParser::DeclIDContext::ID() {
  return getToken(CalcFisParser::ID, 0);
}

CalcFisParser::MatExprContext* CalcFisParser::DeclIDContext::matExpr() {
  return getRuleContext<CalcFisParser::MatExprContext>(0);
}

CalcFisParser::DeclIDContext::DeclIDContext(ParContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::DeclIDContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitDeclID(this);
  else
    return visitor->visitChildren(this);
}
CalcFisParser::ParContext* CalcFisParser::par() {
  ParContext *_localctx = _tracker.createInstance<ParContext>(_ctx, getState());
  enterRule(_localctx, 16, CalcFisParser::RulePar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(89);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CalcFisParser::DeclIDContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(83);
      match(CalcFisParser::ID);
      setState(84);
      match(CalcFisParser::T__0);
      setState(85);
      matExpr(0);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CalcFisParser::DeclIDUnknownContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(86);
      match(CalcFisParser::ID);
      setState(87);
      match(CalcFisParser::T__0);
      setState(88);
      match(CalcFisParser::T__12);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MatExprContext ------------------------------------------------------------------

CalcFisParser::MatExprContext::MatExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcFisParser::MatExprContext::getRuleIndex() const {
  return CalcFisParser::RuleMatExpr;
}

void CalcFisParser::MatExprContext::copyFrom(MatExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- MinMatExprContext ------------------------------------------------------------------

tree::TerminalNode* CalcFisParser::MinMatExprContext::SUB() {
  return getToken(CalcFisParser::SUB, 0);
}

CalcFisParser::MatExprContext* CalcFisParser::MinMatExprContext::matExpr() {
  return getRuleContext<CalcFisParser::MatExprContext>(0);
}

CalcFisParser::MinMatExprContext::MinMatExprContext(MatExprContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::MinMatExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitMinMatExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunMatExprContext ------------------------------------------------------------------

CalcFisParser::FunContext* CalcFisParser::FunMatExprContext::fun() {
  return getRuleContext<CalcFisParser::FunContext>(0);
}

CalcFisParser::FunMatExprContext::FunMatExprContext(MatExprContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::FunMatExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitFunMatExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PowerMatExprContext ------------------------------------------------------------------

std::vector<CalcFisParser::MatExprContext *> CalcFisParser::PowerMatExprContext::matExpr() {
  return getRuleContexts<CalcFisParser::MatExprContext>();
}

CalcFisParser::MatExprContext* CalcFisParser::PowerMatExprContext::matExpr(size_t i) {
  return getRuleContext<CalcFisParser::MatExprContext>(i);
}

tree::TerminalNode* CalcFisParser::PowerMatExprContext::POW() {
  return getToken(CalcFisParser::POW, 0);
}

CalcFisParser::PowerMatExprContext::PowerMatExprContext(MatExprContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::PowerMatExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitPowerMatExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenMatExprContext ------------------------------------------------------------------

tree::TerminalNode* CalcFisParser::ParenMatExprContext::LPAR() {
  return getToken(CalcFisParser::LPAR, 0);
}

CalcFisParser::MatExprContext* CalcFisParser::ParenMatExprContext::matExpr() {
  return getRuleContext<CalcFisParser::MatExprContext>(0);
}

tree::TerminalNode* CalcFisParser::ParenMatExprContext::RPAR() {
  return getToken(CalcFisParser::RPAR, 0);
}

CalcFisParser::ParenMatExprContext::ParenMatExprContext(MatExprContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::ParenMatExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitParenMatExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ModMatExprContext ------------------------------------------------------------------

std::vector<CalcFisParser::MatExprContext *> CalcFisParser::ModMatExprContext::matExpr() {
  return getRuleContexts<CalcFisParser::MatExprContext>();
}

CalcFisParser::MatExprContext* CalcFisParser::ModMatExprContext::matExpr(size_t i) {
  return getRuleContext<CalcFisParser::MatExprContext>(i);
}

tree::TerminalNode* CalcFisParser::ModMatExprContext::MOD() {
  return getToken(CalcFisParser::MOD, 0);
}

CalcFisParser::ModMatExprContext::ModMatExprContext(MatExprContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::ModMatExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitModMatExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RootMatExprContext ------------------------------------------------------------------

std::vector<CalcFisParser::MatExprContext *> CalcFisParser::RootMatExprContext::matExpr() {
  return getRuleContexts<CalcFisParser::MatExprContext>();
}

CalcFisParser::MatExprContext* CalcFisParser::RootMatExprContext::matExpr(size_t i) {
  return getRuleContext<CalcFisParser::MatExprContext>(i);
}

tree::TerminalNode* CalcFisParser::RootMatExprContext::ROOT() {
  return getToken(CalcFisParser::ROOT, 0);
}

CalcFisParser::RootMatExprContext::RootMatExprContext(MatExprContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::RootMatExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitRootMatExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivMatExprContext ------------------------------------------------------------------

std::vector<CalcFisParser::MatExprContext *> CalcFisParser::MulDivMatExprContext::matExpr() {
  return getRuleContexts<CalcFisParser::MatExprContext>();
}

CalcFisParser::MatExprContext* CalcFisParser::MulDivMatExprContext::matExpr(size_t i) {
  return getRuleContext<CalcFisParser::MatExprContext>(i);
}

tree::TerminalNode* CalcFisParser::MulDivMatExprContext::MUL() {
  return getToken(CalcFisParser::MUL, 0);
}

tree::TerminalNode* CalcFisParser::MulDivMatExprContext::DIV() {
  return getToken(CalcFisParser::DIV, 0);
}

CalcFisParser::MulDivMatExprContext::MulDivMatExprContext(MatExprContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::MulDivMatExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitMulDivMatExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubMatExprContext ------------------------------------------------------------------

std::vector<CalcFisParser::MatExprContext *> CalcFisParser::AddSubMatExprContext::matExpr() {
  return getRuleContexts<CalcFisParser::MatExprContext>();
}

CalcFisParser::MatExprContext* CalcFisParser::AddSubMatExprContext::matExpr(size_t i) {
  return getRuleContext<CalcFisParser::MatExprContext>(i);
}

tree::TerminalNode* CalcFisParser::AddSubMatExprContext::ADD() {
  return getToken(CalcFisParser::ADD, 0);
}

tree::TerminalNode* CalcFisParser::AddSubMatExprContext::SUB() {
  return getToken(CalcFisParser::SUB, 0);
}

CalcFisParser::AddSubMatExprContext::AddSubMatExprContext(MatExprContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::AddSubMatExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitAddSubMatExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdMatExprContext ------------------------------------------------------------------

tree::TerminalNode* CalcFisParser::IdMatExprContext::ID() {
  return getToken(CalcFisParser::ID, 0);
}

CalcFisParser::IdMatExprContext::IdMatExprContext(MatExprContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::IdMatExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitIdMatExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogMatExprContext ------------------------------------------------------------------

tree::TerminalNode* CalcFisParser::LogMatExprContext::LOG() {
  return getToken(CalcFisParser::LOG, 0);
}

std::vector<CalcFisParser::MatExprContext *> CalcFisParser::LogMatExprContext::matExpr() {
  return getRuleContexts<CalcFisParser::MatExprContext>();
}

CalcFisParser::MatExprContext* CalcFisParser::LogMatExprContext::matExpr(size_t i) {
  return getRuleContext<CalcFisParser::MatExprContext>(i);
}

CalcFisParser::LogMatExprContext::LogMatExprContext(MatExprContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::LogMatExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitLogMatExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumMatExprContext ------------------------------------------------------------------

CalcFisParser::NumContext* CalcFisParser::NumMatExprContext::num() {
  return getRuleContext<CalcFisParser::NumContext>(0);
}

CalcFisParser::NumMatExprContext::NumMatExprContext(MatExprContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::NumMatExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitNumMatExpr(this);
  else
    return visitor->visitChildren(this);
}

CalcFisParser::MatExprContext* CalcFisParser::matExpr() {
   return matExpr(0);
}

CalcFisParser::MatExprContext* CalcFisParser::matExpr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CalcFisParser::MatExprContext *_localctx = _tracker.createInstance<MatExprContext>(_ctx, parentState);
  CalcFisParser::MatExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 18;
  enterRecursionRule(_localctx, 18, CalcFisParser::RuleMatExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(106);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CalcFisParser::LOG: {
        _localctx = _tracker.createInstance<LogMatExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(92);
        match(CalcFisParser::LOG);
        setState(93);
        matExpr(0);
        setState(94);
        match(CalcFisParser::T__11);
        setState(95);
        matExpr(8);
        break;
      }

      case CalcFisParser::SUB: {
        _localctx = _tracker.createInstance<MinMatExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(97);
        match(CalcFisParser::SUB);
        setState(98);
        matExpr(5);
        break;
      }

      case CalcFisParser::COS:
      case CalcFisParser::SEN:
      case CalcFisParser::TG:
      case CalcFisParser::SEC:
      case CalcFisParser::CSC:
      case CalcFisParser::CTG: {
        _localctx = _tracker.createInstance<FunMatExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(99);
        fun();
        break;
      }

      case CalcFisParser::INT:
      case CalcFisParser::FLOAT: {
        _localctx = _tracker.createInstance<NumMatExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(100);
        num();
        break;
      }

      case CalcFisParser::ID: {
        _localctx = _tracker.createInstance<IdMatExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(101);
        match(CalcFisParser::ID);
        break;
      }

      case CalcFisParser::LPAR: {
        _localctx = _tracker.createInstance<ParenMatExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(102);
        match(CalcFisParser::LPAR);
        setState(103);
        matExpr(0);
        setState(104);
        match(CalcFisParser::RPAR);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(125);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(123);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<RootMatExprContext>(_tracker.createInstance<MatExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleMatExpr);
          setState(108);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(109);
          match(CalcFisParser::ROOT);
          setState(110);
          matExpr(12);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<PowerMatExprContext>(_tracker.createInstance<MatExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleMatExpr);
          setState(111);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(112);
          match(CalcFisParser::POW);
          setState(113);
          matExpr(11);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ModMatExprContext>(_tracker.createInstance<MatExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleMatExpr);
          setState(114);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(115);
          match(CalcFisParser::MOD);
          setState(116);
          matExpr(10);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<MulDivMatExprContext>(_tracker.createInstance<MatExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleMatExpr);
          setState(117);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(118);
          _la = _input->LA(1);
          if (!(_la == CalcFisParser::MUL

          || _la == CalcFisParser::DIV)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(119);
          matExpr(8);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<AddSubMatExprContext>(_tracker.createInstance<MatExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleMatExpr);
          setState(120);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(121);
          _la = _input->LA(1);
          if (!(_la == CalcFisParser::ADD

          || _la == CalcFisParser::SUB)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(122);
          matExpr(7);
          break;
        }

        default:
          break;
        } 
      }
      setState(127);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- FunContext ------------------------------------------------------------------

CalcFisParser::FunContext::FunContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcFisParser::FunContext::getRuleIndex() const {
  return CalcFisParser::RuleFun;
}

void CalcFisParser::FunContext::copyFrom(FunContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- CtgMatExprContext ------------------------------------------------------------------

tree::TerminalNode* CalcFisParser::CtgMatExprContext::CTG() {
  return getToken(CalcFisParser::CTG, 0);
}

CalcFisParser::MatExprContext* CalcFisParser::CtgMatExprContext::matExpr() {
  return getRuleContext<CalcFisParser::MatExprContext>(0);
}

CalcFisParser::CtgMatExprContext::CtgMatExprContext(FunContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::CtgMatExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitCtgMatExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SenMatExprContext ------------------------------------------------------------------

tree::TerminalNode* CalcFisParser::SenMatExprContext::SEN() {
  return getToken(CalcFisParser::SEN, 0);
}

CalcFisParser::MatExprContext* CalcFisParser::SenMatExprContext::matExpr() {
  return getRuleContext<CalcFisParser::MatExprContext>(0);
}

CalcFisParser::SenMatExprContext::SenMatExprContext(FunContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::SenMatExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitSenMatExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TgMatExprContext ------------------------------------------------------------------

tree::TerminalNode* CalcFisParser::TgMatExprContext::TG() {
  return getToken(CalcFisParser::TG, 0);
}

CalcFisParser::MatExprContext* CalcFisParser::TgMatExprContext::matExpr() {
  return getRuleContext<CalcFisParser::MatExprContext>(0);
}

CalcFisParser::TgMatExprContext::TgMatExprContext(FunContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::TgMatExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitTgMatExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CscMatExprContext ------------------------------------------------------------------

tree::TerminalNode* CalcFisParser::CscMatExprContext::CSC() {
  return getToken(CalcFisParser::CSC, 0);
}

CalcFisParser::MatExprContext* CalcFisParser::CscMatExprContext::matExpr() {
  return getRuleContext<CalcFisParser::MatExprContext>(0);
}

CalcFisParser::CscMatExprContext::CscMatExprContext(FunContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::CscMatExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitCscMatExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SecMatExprContext ------------------------------------------------------------------

tree::TerminalNode* CalcFisParser::SecMatExprContext::SEC() {
  return getToken(CalcFisParser::SEC, 0);
}

CalcFisParser::MatExprContext* CalcFisParser::SecMatExprContext::matExpr() {
  return getRuleContext<CalcFisParser::MatExprContext>(0);
}

CalcFisParser::SecMatExprContext::SecMatExprContext(FunContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::SecMatExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitSecMatExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CosMatExprContext ------------------------------------------------------------------

tree::TerminalNode* CalcFisParser::CosMatExprContext::COS() {
  return getToken(CalcFisParser::COS, 0);
}

CalcFisParser::MatExprContext* CalcFisParser::CosMatExprContext::matExpr() {
  return getRuleContext<CalcFisParser::MatExprContext>(0);
}

CalcFisParser::CosMatExprContext::CosMatExprContext(FunContext *ctx) { copyFrom(ctx); }


std::any CalcFisParser::CosMatExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitCosMatExpr(this);
  else
    return visitor->visitChildren(this);
}
CalcFisParser::FunContext* CalcFisParser::fun() {
  FunContext *_localctx = _tracker.createInstance<FunContext>(_ctx, getState());
  enterRule(_localctx, 20, CalcFisParser::RuleFun);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(140);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CalcFisParser::COS: {
        _localctx = _tracker.createInstance<CalcFisParser::CosMatExprContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(128);
        match(CalcFisParser::COS);
        setState(129);
        matExpr(0);
        break;
      }

      case CalcFisParser::SEN: {
        _localctx = _tracker.createInstance<CalcFisParser::SenMatExprContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(130);
        match(CalcFisParser::SEN);
        setState(131);
        matExpr(0);
        break;
      }

      case CalcFisParser::TG: {
        _localctx = _tracker.createInstance<CalcFisParser::TgMatExprContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(132);
        match(CalcFisParser::TG);
        setState(133);
        matExpr(0);
        break;
      }

      case CalcFisParser::SEC: {
        _localctx = _tracker.createInstance<CalcFisParser::SecMatExprContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(134);
        match(CalcFisParser::SEC);
        setState(135);
        matExpr(0);
        break;
      }

      case CalcFisParser::CSC: {
        _localctx = _tracker.createInstance<CalcFisParser::CscMatExprContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(136);
        match(CalcFisParser::CSC);
        setState(137);
        matExpr(0);
        break;
      }

      case CalcFisParser::CTG: {
        _localctx = _tracker.createInstance<CalcFisParser::CtgMatExprContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(138);
        match(CalcFisParser::CTG);
        setState(139);
        matExpr(0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumContext ------------------------------------------------------------------

CalcFisParser::NumContext::NumContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CalcFisParser::NumContext::INT() {
  return getToken(CalcFisParser::INT, 0);
}

tree::TerminalNode* CalcFisParser::NumContext::FLOAT() {
  return getToken(CalcFisParser::FLOAT, 0);
}


size_t CalcFisParser::NumContext::getRuleIndex() const {
  return CalcFisParser::RuleNum;
}


std::any CalcFisParser::NumContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcFisVisitor*>(visitor))
    return parserVisitor->visitNum(this);
  else
    return visitor->visitChildren(this);
}

CalcFisParser::NumContext* CalcFisParser::num() {
  NumContext *_localctx = _tracker.createInstance<NumContext>(_ctx, getState());
  enterRule(_localctx, 22, CalcFisParser::RuleNum);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    _la = _input->LA(1);
    if (!(_la == CalcFisParser::INT

    || _la == CalcFisParser::FLOAT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool CalcFisParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 9: return matExprSempred(antlrcpp::downCast<MatExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CalcFisParser::matExprSempred(MatExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 11);
    case 1: return precpred(_ctx, 10);
    case 2: return precpred(_ctx, 9);
    case 3: return precpred(_ctx, 7);
    case 4: return precpred(_ctx, 6);

  default:
    break;
  }
  return true;
}

void CalcFisParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  calcfisParserInitialize();
#else
  ::antlr4::internal::call_once(calcfisParserOnceFlag, calcfisParserInitialize);
#endif
}
