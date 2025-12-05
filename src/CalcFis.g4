grammar CalcFis;
// Parser
prog: statement* EOF;
// Ahora las reglas de 
statement
  : ID '=' expr ';'? # assignStat
  | expr # stmtExpr
  ;

expr
  : fisExpr # ExprFis
  | matExpr # ExprMat
  | printExpr # ExprPrint
  | stringExpr # ExprString
  ;

printExpr
  : 'ppp' '(' (expr | STRING)+ ')' #thePrintExpr
  ;

stringExpr
  : STRING # theStringExpr
  ;

fisExpr
  : oper '(' pars ')' # OperPars
  ;

oper
  : 'cl' # operCaidaLibre
  | 'mru' # operMRU
  | 'mruv' # operMRUV
  | 'tm' # operTrabajMec
  | 'mcel' # operMCeleste
  | 'mas' # operMAS
  | 'flu' # operFluidos
  | 'mcu' # operMCU
  | 'em' # operEnergMec
  ;

pars
  : par (',' par)* #ParPar
  ;

par
  : ID '=' matExpr # declID
  | ID '=' '?' # declIDUnknown
  ;

matExpr
  : matExpr 'r' matExpr           # RootMatExpr
  | matExpr 'pot' matExpr         # PowerMatExpr
  | matExpr '%' matExpr           # ModMatExpr
  | 'log' matExpr ',' matExpr     # LogMatExpr
  | matExpr ('*' | '/') matExpr   # MulDivMatExpr
  | matExpr ('+' | '-') matExpr   # AddSubMatExpr
  | '-' matExpr                   # MinMatExpr
  | fun                           # FunMatExpr
  | num                           # NumMatExpr
  | ID                            # IdMatExpr
  | '(' matExpr ')'               # ParenMatExpr
  ;


fun
  : 'cos' matExpr # CosMatExpr
  | 'sen' matExpr # SenMatExpr
  | 'tg' matExpr # TgMatExpr
  | 'sec' matExpr # SecMatExpr
  | 'csc' matExpr # CscMatExpr
  | 'ctg' matExpr # CtgMatExpr
  ;

num
  : INT 
  | FLOAT ;

// Scanner
ADD: '+' ;
SUB: '-' ;
MUL: '*' ;
DIV: '/' ;
POW: 'pot' ;
MOD: '%' ;
LOG: 'log' ;
ROOT: 'r' ;
LPAR: '(' ;
RPAR: ')' ;
COS: 'cos' ;
SEN: 'sen' ;
TG: 'tg' ;
SEC: 'sec' ;
CSC: 'csc' ;
CTG: 'ctg' ;
PRINT: 'ppp' ;

// Lexer
ID: [a-zA-Z_][a-zA-Z_0-9]* ;
INT: [+-]?[0-9]+ ;
FLOAT: [+-]?[0-9]+'.'[0-9]+ ;
STRING: '"' ~["]* '"' ;
WS: [ \t\n\r]+ -> skip ;