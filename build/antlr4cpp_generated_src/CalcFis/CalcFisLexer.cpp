
// Generated from /mnt/c/Users/Mauricio/Documents/SEXTO CICLO/Compiladores/TF/CalcPhys/src/CalcFis.g4 by ANTLR 4.13.2


#include "CalcFisLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct CalcFisLexerStaticData final {
  CalcFisLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CalcFisLexerStaticData(const CalcFisLexerStaticData&) = delete;
  CalcFisLexerStaticData(CalcFisLexerStaticData&&) = delete;
  CalcFisLexerStaticData& operator=(const CalcFisLexerStaticData&) = delete;
  CalcFisLexerStaticData& operator=(CalcFisLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag calcfislexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<CalcFisLexerStaticData> calcfislexerLexerStaticData = nullptr;

void calcfislexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (calcfislexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(calcfislexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CalcFisLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "ADD", "SUB", "MUL", "DIV", 
      "POW", "MOD", "LOG", "ROOT", "LPAR", "RPAR", "COS", "SEN", "TG", "SEC", 
      "CSC", "CTG", "PRINT", "ID", "INT", "FLOAT", "STRING", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'='", "';'", "'cl'", "'mru'", "'mruv'", "'tm'", "'mcel'", "'mas'", 
      "'flu'", "'mcu'", "'em'", "'ele'", "','", "'\\u003F'", "'+'", "'-'", 
      "'*'", "'/'", "'pot'", "'%'", "'log'", "'r'", "'('", "')'", "'cos'", 
      "'sen'", "'tg'", "'sec'", "'csc'", "'ctg'", "'ppp'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "ADD", 
      "SUB", "MUL", "DIV", "POW", "MOD", "LOG", "ROOT", "LPAR", "RPAR", 
      "COS", "SEN", "TG", "SEC", "CSC", "CTG", "PRINT", "ID", "INT", "FLOAT", 
      "STRING", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,36,216,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,1,0,1,0,1,1,1,1,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,
  	1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,9,1,
  	9,1,9,1,9,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,12,1,12,1,13,1,13,1,14,
  	1,14,1,15,1,15,1,16,1,16,1,17,1,17,1,18,1,18,1,18,1,18,1,19,1,19,1,20,
  	1,20,1,20,1,20,1,21,1,21,1,22,1,22,1,23,1,23,1,24,1,24,1,24,1,24,1,25,
  	1,25,1,25,1,25,1,26,1,26,1,26,1,27,1,27,1,27,1,27,1,28,1,28,1,28,1,28,
  	1,29,1,29,1,29,1,29,1,30,1,30,1,30,1,30,1,31,1,31,5,31,174,8,31,10,31,
  	12,31,177,9,31,1,32,3,32,180,8,32,1,32,4,32,183,8,32,11,32,12,32,184,
  	1,33,3,33,188,8,33,1,33,4,33,191,8,33,11,33,12,33,192,1,33,1,33,4,33,
  	197,8,33,11,33,12,33,198,1,34,1,34,5,34,203,8,34,10,34,12,34,206,9,34,
  	1,34,1,34,1,35,4,35,211,8,35,11,35,12,35,212,1,35,1,35,0,0,36,1,1,3,2,
  	5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,
  	16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,
  	55,28,57,29,59,30,61,31,63,32,65,33,67,34,69,35,71,36,1,0,6,3,0,65,90,
  	95,95,97,122,4,0,48,57,65,90,95,95,97,122,2,0,43,43,45,45,1,0,48,57,1,
  	0,34,34,3,0,9,10,13,13,32,32,223,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,
  	0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,
  	0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,
  	0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,
  	39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,
  	0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,
  	0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,
  	71,1,0,0,0,1,73,1,0,0,0,3,75,1,0,0,0,5,77,1,0,0,0,7,80,1,0,0,0,9,84,1,
  	0,0,0,11,89,1,0,0,0,13,92,1,0,0,0,15,97,1,0,0,0,17,101,1,0,0,0,19,105,
  	1,0,0,0,21,109,1,0,0,0,23,112,1,0,0,0,25,116,1,0,0,0,27,118,1,0,0,0,29,
  	120,1,0,0,0,31,122,1,0,0,0,33,124,1,0,0,0,35,126,1,0,0,0,37,128,1,0,0,
  	0,39,132,1,0,0,0,41,134,1,0,0,0,43,138,1,0,0,0,45,140,1,0,0,0,47,142,
  	1,0,0,0,49,144,1,0,0,0,51,148,1,0,0,0,53,152,1,0,0,0,55,155,1,0,0,0,57,
  	159,1,0,0,0,59,163,1,0,0,0,61,167,1,0,0,0,63,171,1,0,0,0,65,179,1,0,0,
  	0,67,187,1,0,0,0,69,200,1,0,0,0,71,210,1,0,0,0,73,74,5,61,0,0,74,2,1,
  	0,0,0,75,76,5,59,0,0,76,4,1,0,0,0,77,78,5,99,0,0,78,79,5,108,0,0,79,6,
  	1,0,0,0,80,81,5,109,0,0,81,82,5,114,0,0,82,83,5,117,0,0,83,8,1,0,0,0,
  	84,85,5,109,0,0,85,86,5,114,0,0,86,87,5,117,0,0,87,88,5,118,0,0,88,10,
  	1,0,0,0,89,90,5,116,0,0,90,91,5,109,0,0,91,12,1,0,0,0,92,93,5,109,0,0,
  	93,94,5,99,0,0,94,95,5,101,0,0,95,96,5,108,0,0,96,14,1,0,0,0,97,98,5,
  	109,0,0,98,99,5,97,0,0,99,100,5,115,0,0,100,16,1,0,0,0,101,102,5,102,
  	0,0,102,103,5,108,0,0,103,104,5,117,0,0,104,18,1,0,0,0,105,106,5,109,
  	0,0,106,107,5,99,0,0,107,108,5,117,0,0,108,20,1,0,0,0,109,110,5,101,0,
  	0,110,111,5,109,0,0,111,22,1,0,0,0,112,113,5,101,0,0,113,114,5,108,0,
  	0,114,115,5,101,0,0,115,24,1,0,0,0,116,117,5,44,0,0,117,26,1,0,0,0,118,
  	119,5,63,0,0,119,28,1,0,0,0,120,121,5,43,0,0,121,30,1,0,0,0,122,123,5,
  	45,0,0,123,32,1,0,0,0,124,125,5,42,0,0,125,34,1,0,0,0,126,127,5,47,0,
  	0,127,36,1,0,0,0,128,129,5,112,0,0,129,130,5,111,0,0,130,131,5,116,0,
  	0,131,38,1,0,0,0,132,133,5,37,0,0,133,40,1,0,0,0,134,135,5,108,0,0,135,
  	136,5,111,0,0,136,137,5,103,0,0,137,42,1,0,0,0,138,139,5,114,0,0,139,
  	44,1,0,0,0,140,141,5,40,0,0,141,46,1,0,0,0,142,143,5,41,0,0,143,48,1,
  	0,0,0,144,145,5,99,0,0,145,146,5,111,0,0,146,147,5,115,0,0,147,50,1,0,
  	0,0,148,149,5,115,0,0,149,150,5,101,0,0,150,151,5,110,0,0,151,52,1,0,
  	0,0,152,153,5,116,0,0,153,154,5,103,0,0,154,54,1,0,0,0,155,156,5,115,
  	0,0,156,157,5,101,0,0,157,158,5,99,0,0,158,56,1,0,0,0,159,160,5,99,0,
  	0,160,161,5,115,0,0,161,162,5,99,0,0,162,58,1,0,0,0,163,164,5,99,0,0,
  	164,165,5,116,0,0,165,166,5,103,0,0,166,60,1,0,0,0,167,168,5,112,0,0,
  	168,169,5,112,0,0,169,170,5,112,0,0,170,62,1,0,0,0,171,175,7,0,0,0,172,
  	174,7,1,0,0,173,172,1,0,0,0,174,177,1,0,0,0,175,173,1,0,0,0,175,176,1,
  	0,0,0,176,64,1,0,0,0,177,175,1,0,0,0,178,180,7,2,0,0,179,178,1,0,0,0,
  	179,180,1,0,0,0,180,182,1,0,0,0,181,183,7,3,0,0,182,181,1,0,0,0,183,184,
  	1,0,0,0,184,182,1,0,0,0,184,185,1,0,0,0,185,66,1,0,0,0,186,188,7,2,0,
  	0,187,186,1,0,0,0,187,188,1,0,0,0,188,190,1,0,0,0,189,191,7,3,0,0,190,
  	189,1,0,0,0,191,192,1,0,0,0,192,190,1,0,0,0,192,193,1,0,0,0,193,194,1,
  	0,0,0,194,196,5,46,0,0,195,197,7,3,0,0,196,195,1,0,0,0,197,198,1,0,0,
  	0,198,196,1,0,0,0,198,199,1,0,0,0,199,68,1,0,0,0,200,204,5,34,0,0,201,
  	203,8,4,0,0,202,201,1,0,0,0,203,206,1,0,0,0,204,202,1,0,0,0,204,205,1,
  	0,0,0,205,207,1,0,0,0,206,204,1,0,0,0,207,208,5,34,0,0,208,70,1,0,0,0,
  	209,211,7,5,0,0,210,209,1,0,0,0,211,212,1,0,0,0,212,210,1,0,0,0,212,213,
  	1,0,0,0,213,214,1,0,0,0,214,215,6,35,0,0,215,72,1,0,0,0,9,0,175,179,184,
  	187,192,198,204,212,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  calcfislexerLexerStaticData = std::move(staticData);
}

}

CalcFisLexer::CalcFisLexer(CharStream *input) : Lexer(input) {
  CalcFisLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *calcfislexerLexerStaticData->atn, calcfislexerLexerStaticData->decisionToDFA, calcfislexerLexerStaticData->sharedContextCache);
}

CalcFisLexer::~CalcFisLexer() {
  delete _interpreter;
}

std::string CalcFisLexer::getGrammarFileName() const {
  return "CalcFis.g4";
}

const std::vector<std::string>& CalcFisLexer::getRuleNames() const {
  return calcfislexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& CalcFisLexer::getChannelNames() const {
  return calcfislexerLexerStaticData->channelNames;
}

const std::vector<std::string>& CalcFisLexer::getModeNames() const {
  return calcfislexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& CalcFisLexer::getVocabulary() const {
  return calcfislexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CalcFisLexer::getSerializedATN() const {
  return calcfislexerLexerStaticData->serializedATN;
}

const atn::ATN& CalcFisLexer::getATN() const {
  return *calcfislexerLexerStaticData->atn;
}




void CalcFisLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  calcfislexerLexerInitialize();
#else
  ::antlr4::internal::call_once(calcfislexerLexerOnceFlag, calcfislexerLexerInitialize);
#endif
}
