// Generated from c:/Users/Mauricio/Documents/SEXTO CICLO/Compiladores/TF/src/CalcFis.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class CalcFisParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, ADD=14, SUB=15, MUL=16, DIV=17, 
		POW=18, MOD=19, LOG=20, ROOT=21, LPAR=22, RPAR=23, COS=24, SEN=25, TG=26, 
		SEC=27, CSC=28, CTG=29, ID=30, INT=31, FLOAT=32, WS=33;
	public static final int
		RULE_prog = 0, RULE_statement = 1, RULE_expr = 2, RULE_fisExpr = 3, RULE_oper = 4, 
		RULE_pars = 5, RULE_par = 6, RULE_matExpr = 7, RULE_fun = 8, RULE_num = 9;
	private static String[] makeRuleNames() {
		return new String[] {
			"prog", "statement", "expr", "fisExpr", "oper", "pars", "par", "matExpr", 
			"fun", "num"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'='", "';'", "'cl'", "'mru'", "'mruv'", "'tm'", "'mcel'", "'mas'", 
			"'flu'", "'mcu'", "'em'", "','", "'?'", "'+'", "'-'", "'*'", "'/'", "'pot'", 
			"'%'", "'log'", "'r'", "'('", "')'", "'cos'", "'sen'", "'tg'", "'sec'", 
			"'csc'", "'ctg'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, "ADD", "SUB", "MUL", "DIV", "POW", "MOD", "LOG", "ROOT", 
			"LPAR", "RPAR", "COS", "SEN", "TG", "SEC", "CSC", "CTG", "ID", "INT", 
			"FLOAT", "WS"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "CalcFis.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public CalcFisParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ProgContext extends ParserRuleContext {
		public TerminalNode EOF() { return getToken(CalcFisParser.EOF, 0); }
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public ProgContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_prog; }
	}

	public final ProgContext prog() throws RecognitionException {
		ProgContext _localctx = new ProgContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_prog);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(23);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 8578437112L) != 0)) {
				{
				{
				setState(20);
				statement();
				}
				}
				setState(25);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(26);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class StatementContext extends ParserRuleContext {
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
	 
		public StatementContext() { }
		public void copyFrom(StatementContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class StmtExprContext extends StatementContext {
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public StmtExprContext(StatementContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class AssignStatContext extends StatementContext {
		public TerminalNode ID() { return getToken(CalcFisParser.ID, 0); }
		public ExprContext expr() {
			return getRuleContext(ExprContext.class,0);
		}
		public AssignStatContext(StatementContext ctx) { copyFrom(ctx); }
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_statement);
		int _la;
		try {
			setState(35);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
			case 1:
				_localctx = new AssignStatContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(28);
				match(ID);
				setState(29);
				match(T__0);
				setState(30);
				expr();
				setState(32);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__1) {
					{
					setState(31);
					match(T__1);
					}
				}

				}
				break;
			case 2:
				_localctx = new StmtExprContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(34);
				expr();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ExprContext extends ParserRuleContext {
		public ExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr; }
	 
		public ExprContext() { }
		public void copyFrom(ExprContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class ExprFisContext extends ExprContext {
		public FisExprContext fisExpr() {
			return getRuleContext(FisExprContext.class,0);
		}
		public ExprFisContext(ExprContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class ExprMatContext extends ExprContext {
		public MatExprContext matExpr() {
			return getRuleContext(MatExprContext.class,0);
		}
		public ExprMatContext(ExprContext ctx) { copyFrom(ctx); }
	}

	public final ExprContext expr() throws RecognitionException {
		ExprContext _localctx = new ExprContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_expr);
		try {
			setState(39);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__2:
			case T__3:
			case T__4:
			case T__5:
			case T__6:
			case T__7:
			case T__8:
			case T__9:
			case T__10:
				_localctx = new ExprFisContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(37);
				fisExpr();
				}
				break;
			case SUB:
			case LOG:
			case LPAR:
			case COS:
			case SEN:
			case TG:
			case SEC:
			case CSC:
			case CTG:
			case ID:
			case INT:
			case FLOAT:
				_localctx = new ExprMatContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(38);
				matExpr(0);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FisExprContext extends ParserRuleContext {
		public FisExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fisExpr; }
	 
		public FisExprContext() { }
		public void copyFrom(FisExprContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class OperParsContext extends FisExprContext {
		public OperContext oper() {
			return getRuleContext(OperContext.class,0);
		}
		public TerminalNode LPAR() { return getToken(CalcFisParser.LPAR, 0); }
		public ParsContext pars() {
			return getRuleContext(ParsContext.class,0);
		}
		public TerminalNode RPAR() { return getToken(CalcFisParser.RPAR, 0); }
		public OperParsContext(FisExprContext ctx) { copyFrom(ctx); }
	}

	public final FisExprContext fisExpr() throws RecognitionException {
		FisExprContext _localctx = new FisExprContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_fisExpr);
		try {
			_localctx = new OperParsContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(41);
			oper();
			setState(42);
			match(LPAR);
			setState(43);
			pars();
			setState(44);
			match(RPAR);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class OperContext extends ParserRuleContext {
		public OperContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_oper; }
	 
		public OperContext() { }
		public void copyFrom(OperContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class OperFluidosContext extends OperContext {
		public OperFluidosContext(OperContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class OperMRUContext extends OperContext {
		public OperMRUContext(OperContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class OperMRUVContext extends OperContext {
		public OperMRUVContext(OperContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class OperTrabajMecContext extends OperContext {
		public OperTrabajMecContext(OperContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class OperMCelesteContext extends OperContext {
		public OperMCelesteContext(OperContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class OperMASContext extends OperContext {
		public OperMASContext(OperContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class OperMCUContext extends OperContext {
		public OperMCUContext(OperContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class OperCaidaLibreContext extends OperContext {
		public OperCaidaLibreContext(OperContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class OperEnergMecContext extends OperContext {
		public OperEnergMecContext(OperContext ctx) { copyFrom(ctx); }
	}

	public final OperContext oper() throws RecognitionException {
		OperContext _localctx = new OperContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_oper);
		try {
			setState(55);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__2:
				_localctx = new OperCaidaLibreContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(46);
				match(T__2);
				}
				break;
			case T__3:
				_localctx = new OperMRUContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(47);
				match(T__3);
				}
				break;
			case T__4:
				_localctx = new OperMRUVContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(48);
				match(T__4);
				}
				break;
			case T__5:
				_localctx = new OperTrabajMecContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(49);
				match(T__5);
				}
				break;
			case T__6:
				_localctx = new OperMCelesteContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(50);
				match(T__6);
				}
				break;
			case T__7:
				_localctx = new OperMASContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(51);
				match(T__7);
				}
				break;
			case T__8:
				_localctx = new OperFluidosContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(52);
				match(T__8);
				}
				break;
			case T__9:
				_localctx = new OperMCUContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(53);
				match(T__9);
				}
				break;
			case T__10:
				_localctx = new OperEnergMecContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(54);
				match(T__10);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParsContext extends ParserRuleContext {
		public ParsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_pars; }
	 
		public ParsContext() { }
		public void copyFrom(ParsContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class ParParContext extends ParsContext {
		public List<ParContext> par() {
			return getRuleContexts(ParContext.class);
		}
		public ParContext par(int i) {
			return getRuleContext(ParContext.class,i);
		}
		public ParParContext(ParsContext ctx) { copyFrom(ctx); }
	}

	public final ParsContext pars() throws RecognitionException {
		ParsContext _localctx = new ParsContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_pars);
		int _la;
		try {
			_localctx = new ParParContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(57);
			par();
			setState(62);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__11) {
				{
				{
				setState(58);
				match(T__11);
				setState(59);
				par();
				}
				}
				setState(64);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ParContext extends ParserRuleContext {
		public ParContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_par; }
	 
		public ParContext() { }
		public void copyFrom(ParContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class DeclIDUnknownContext extends ParContext {
		public TerminalNode ID() { return getToken(CalcFisParser.ID, 0); }
		public DeclIDUnknownContext(ParContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class DeclIDContext extends ParContext {
		public TerminalNode ID() { return getToken(CalcFisParser.ID, 0); }
		public MatExprContext matExpr() {
			return getRuleContext(MatExprContext.class,0);
		}
		public DeclIDContext(ParContext ctx) { copyFrom(ctx); }
	}

	public final ParContext par() throws RecognitionException {
		ParContext _localctx = new ParContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_par);
		try {
			setState(71);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
			case 1:
				_localctx = new DeclIDContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(65);
				match(ID);
				setState(66);
				match(T__0);
				setState(67);
				matExpr(0);
				}
				break;
			case 2:
				_localctx = new DeclIDUnknownContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(68);
				match(ID);
				setState(69);
				match(T__0);
				setState(70);
				match(T__12);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class MatExprContext extends ParserRuleContext {
		public MatExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_matExpr; }
	 
		public MatExprContext() { }
		public void copyFrom(MatExprContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class MinMatExprContext extends MatExprContext {
		public TerminalNode SUB() { return getToken(CalcFisParser.SUB, 0); }
		public MatExprContext matExpr() {
			return getRuleContext(MatExprContext.class,0);
		}
		public MinMatExprContext(MatExprContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class FunMatExprContext extends MatExprContext {
		public FunContext fun() {
			return getRuleContext(FunContext.class,0);
		}
		public FunMatExprContext(MatExprContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class PowerMatExprContext extends MatExprContext {
		public List<MatExprContext> matExpr() {
			return getRuleContexts(MatExprContext.class);
		}
		public MatExprContext matExpr(int i) {
			return getRuleContext(MatExprContext.class,i);
		}
		public TerminalNode POW() { return getToken(CalcFisParser.POW, 0); }
		public PowerMatExprContext(MatExprContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class ParenMatExprContext extends MatExprContext {
		public TerminalNode LPAR() { return getToken(CalcFisParser.LPAR, 0); }
		public MatExprContext matExpr() {
			return getRuleContext(MatExprContext.class,0);
		}
		public TerminalNode RPAR() { return getToken(CalcFisParser.RPAR, 0); }
		public ParenMatExprContext(MatExprContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class ModMatExprContext extends MatExprContext {
		public List<MatExprContext> matExpr() {
			return getRuleContexts(MatExprContext.class);
		}
		public MatExprContext matExpr(int i) {
			return getRuleContext(MatExprContext.class,i);
		}
		public TerminalNode MOD() { return getToken(CalcFisParser.MOD, 0); }
		public ModMatExprContext(MatExprContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class RootMatExprContext extends MatExprContext {
		public List<MatExprContext> matExpr() {
			return getRuleContexts(MatExprContext.class);
		}
		public MatExprContext matExpr(int i) {
			return getRuleContext(MatExprContext.class,i);
		}
		public TerminalNode ROOT() { return getToken(CalcFisParser.ROOT, 0); }
		public RootMatExprContext(MatExprContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class MulDivMatExprContext extends MatExprContext {
		public List<MatExprContext> matExpr() {
			return getRuleContexts(MatExprContext.class);
		}
		public MatExprContext matExpr(int i) {
			return getRuleContext(MatExprContext.class,i);
		}
		public TerminalNode MUL() { return getToken(CalcFisParser.MUL, 0); }
		public TerminalNode DIV() { return getToken(CalcFisParser.DIV, 0); }
		public MulDivMatExprContext(MatExprContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class AddSubMatExprContext extends MatExprContext {
		public List<MatExprContext> matExpr() {
			return getRuleContexts(MatExprContext.class);
		}
		public MatExprContext matExpr(int i) {
			return getRuleContext(MatExprContext.class,i);
		}
		public TerminalNode ADD() { return getToken(CalcFisParser.ADD, 0); }
		public TerminalNode SUB() { return getToken(CalcFisParser.SUB, 0); }
		public AddSubMatExprContext(MatExprContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class IdMatExprContext extends MatExprContext {
		public TerminalNode ID() { return getToken(CalcFisParser.ID, 0); }
		public IdMatExprContext(MatExprContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class LogMatExprContext extends MatExprContext {
		public TerminalNode LOG() { return getToken(CalcFisParser.LOG, 0); }
		public List<MatExprContext> matExpr() {
			return getRuleContexts(MatExprContext.class);
		}
		public MatExprContext matExpr(int i) {
			return getRuleContext(MatExprContext.class,i);
		}
		public LogMatExprContext(MatExprContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class NumMatExprContext extends MatExprContext {
		public NumContext num() {
			return getRuleContext(NumContext.class,0);
		}
		public NumMatExprContext(MatExprContext ctx) { copyFrom(ctx); }
	}

	public final MatExprContext matExpr() throws RecognitionException {
		return matExpr(0);
	}

	private MatExprContext matExpr(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		MatExprContext _localctx = new MatExprContext(_ctx, _parentState);
		MatExprContext _prevctx = _localctx;
		int _startState = 14;
		enterRecursionRule(_localctx, 14, RULE_matExpr, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(88);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LOG:
				{
				_localctx = new LogMatExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(74);
				match(LOG);
				setState(75);
				matExpr(0);
				setState(76);
				match(T__11);
				setState(77);
				matExpr(8);
				}
				break;
			case SUB:
				{
				_localctx = new MinMatExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(79);
				match(SUB);
				setState(80);
				matExpr(5);
				}
				break;
			case COS:
			case SEN:
			case TG:
			case SEC:
			case CSC:
			case CTG:
				{
				_localctx = new FunMatExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(81);
				fun();
				}
				break;
			case INT:
			case FLOAT:
				{
				_localctx = new NumMatExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(82);
				num();
				}
				break;
			case ID:
				{
				_localctx = new IdMatExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(83);
				match(ID);
				}
				break;
			case LPAR:
				{
				_localctx = new ParenMatExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(84);
				match(LPAR);
				setState(85);
				matExpr(0);
				setState(86);
				match(RPAR);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(107);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,9,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(105);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
					case 1:
						{
						_localctx = new RootMatExprContext(new MatExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_matExpr);
						setState(90);
						if (!(precpred(_ctx, 11))) throw new FailedPredicateException(this, "precpred(_ctx, 11)");
						setState(91);
						match(ROOT);
						setState(92);
						matExpr(12);
						}
						break;
					case 2:
						{
						_localctx = new PowerMatExprContext(new MatExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_matExpr);
						setState(93);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(94);
						match(POW);
						setState(95);
						matExpr(11);
						}
						break;
					case 3:
						{
						_localctx = new ModMatExprContext(new MatExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_matExpr);
						setState(96);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(97);
						match(MOD);
						setState(98);
						matExpr(10);
						}
						break;
					case 4:
						{
						_localctx = new MulDivMatExprContext(new MatExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_matExpr);
						setState(99);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(100);
						_la = _input.LA(1);
						if ( !(_la==MUL || _la==DIV) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(101);
						matExpr(8);
						}
						break;
					case 5:
						{
						_localctx = new AddSubMatExprContext(new MatExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_matExpr);
						setState(102);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(103);
						_la = _input.LA(1);
						if ( !(_la==ADD || _la==SUB) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(104);
						matExpr(7);
						}
						break;
					}
					} 
				}
				setState(109);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,9,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class FunContext extends ParserRuleContext {
		public FunContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_fun; }
	 
		public FunContext() { }
		public void copyFrom(FunContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class CtgMatExprContext extends FunContext {
		public TerminalNode CTG() { return getToken(CalcFisParser.CTG, 0); }
		public MatExprContext matExpr() {
			return getRuleContext(MatExprContext.class,0);
		}
		public CtgMatExprContext(FunContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class SenMatExprContext extends FunContext {
		public TerminalNode SEN() { return getToken(CalcFisParser.SEN, 0); }
		public MatExprContext matExpr() {
			return getRuleContext(MatExprContext.class,0);
		}
		public SenMatExprContext(FunContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class TgMatExprContext extends FunContext {
		public TerminalNode TG() { return getToken(CalcFisParser.TG, 0); }
		public MatExprContext matExpr() {
			return getRuleContext(MatExprContext.class,0);
		}
		public TgMatExprContext(FunContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class CscMatExprContext extends FunContext {
		public TerminalNode CSC() { return getToken(CalcFisParser.CSC, 0); }
		public MatExprContext matExpr() {
			return getRuleContext(MatExprContext.class,0);
		}
		public CscMatExprContext(FunContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class SecMatExprContext extends FunContext {
		public TerminalNode SEC() { return getToken(CalcFisParser.SEC, 0); }
		public MatExprContext matExpr() {
			return getRuleContext(MatExprContext.class,0);
		}
		public SecMatExprContext(FunContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class CosMatExprContext extends FunContext {
		public TerminalNode COS() { return getToken(CalcFisParser.COS, 0); }
		public MatExprContext matExpr() {
			return getRuleContext(MatExprContext.class,0);
		}
		public CosMatExprContext(FunContext ctx) { copyFrom(ctx); }
	}

	public final FunContext fun() throws RecognitionException {
		FunContext _localctx = new FunContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_fun);
		try {
			setState(122);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COS:
				_localctx = new CosMatExprContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(110);
				match(COS);
				setState(111);
				matExpr(0);
				}
				break;
			case SEN:
				_localctx = new SenMatExprContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(112);
				match(SEN);
				setState(113);
				matExpr(0);
				}
				break;
			case TG:
				_localctx = new TgMatExprContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(114);
				match(TG);
				setState(115);
				matExpr(0);
				}
				break;
			case SEC:
				_localctx = new SecMatExprContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(116);
				match(SEC);
				setState(117);
				matExpr(0);
				}
				break;
			case CSC:
				_localctx = new CscMatExprContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(118);
				match(CSC);
				setState(119);
				matExpr(0);
				}
				break;
			case CTG:
				_localctx = new CtgMatExprContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(120);
				match(CTG);
				setState(121);
				matExpr(0);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class NumContext extends ParserRuleContext {
		public TerminalNode INT() { return getToken(CalcFisParser.INT, 0); }
		public TerminalNode FLOAT() { return getToken(CalcFisParser.FLOAT, 0); }
		public NumContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_num; }
	}

	public final NumContext num() throws RecognitionException {
		NumContext _localctx = new NumContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_num);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(124);
			_la = _input.LA(1);
			if ( !(_la==INT || _la==FLOAT) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 7:
			return matExpr_sempred((MatExprContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean matExpr_sempred(MatExprContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 11);
		case 1:
			return precpred(_ctx, 10);
		case 2:
			return precpred(_ctx, 9);
		case 3:
			return precpred(_ctx, 7);
		case 4:
			return precpred(_ctx, 6);
		}
		return true;
	}

	public static final String _serializedATN =
		"\u0004\u0001!\u007f\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0001\u0000\u0005\u0000\u0016\b\u0000\n\u0000"+
		"\f\u0000\u0019\t\u0000\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0003\u0001!\b\u0001\u0001\u0001\u0003\u0001"+
		"$\b\u0001\u0001\u0002\u0001\u0002\u0003\u0002(\b\u0002\u0001\u0003\u0001"+
		"\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0004\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001"+
		"\u0004\u0003\u00048\b\u0004\u0001\u0005\u0001\u0005\u0001\u0005\u0005"+
		"\u0005=\b\u0005\n\u0005\f\u0005@\t\u0005\u0001\u0006\u0001\u0006\u0001"+
		"\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0003\u0006H\b\u0006\u0001"+
		"\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001"+
		"\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001"+
		"\u0007\u0001\u0007\u0001\u0007\u0003\u0007Y\b\u0007\u0001\u0007\u0001"+
		"\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001"+
		"\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001"+
		"\u0007\u0001\u0007\u0005\u0007j\b\u0007\n\u0007\f\u0007m\t\u0007\u0001"+
		"\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001"+
		"\b\u0001\b\u0001\b\u0003\b{\b\b\u0001\t\u0001\t\u0001\t\u0000\u0001\u000e"+
		"\n\u0000\u0002\u0004\u0006\b\n\f\u000e\u0010\u0012\u0000\u0003\u0001\u0000"+
		"\u0010\u0011\u0001\u0000\u000e\u000f\u0001\u0000\u001f \u0091\u0000\u0017"+
		"\u0001\u0000\u0000\u0000\u0002#\u0001\u0000\u0000\u0000\u0004\'\u0001"+
		"\u0000\u0000\u0000\u0006)\u0001\u0000\u0000\u0000\b7\u0001\u0000\u0000"+
		"\u0000\n9\u0001\u0000\u0000\u0000\fG\u0001\u0000\u0000\u0000\u000eX\u0001"+
		"\u0000\u0000\u0000\u0010z\u0001\u0000\u0000\u0000\u0012|\u0001\u0000\u0000"+
		"\u0000\u0014\u0016\u0003\u0002\u0001\u0000\u0015\u0014\u0001\u0000\u0000"+
		"\u0000\u0016\u0019\u0001\u0000\u0000\u0000\u0017\u0015\u0001\u0000\u0000"+
		"\u0000\u0017\u0018\u0001\u0000\u0000\u0000\u0018\u001a\u0001\u0000\u0000"+
		"\u0000\u0019\u0017\u0001\u0000\u0000\u0000\u001a\u001b\u0005\u0000\u0000"+
		"\u0001\u001b\u0001\u0001\u0000\u0000\u0000\u001c\u001d\u0005\u001e\u0000"+
		"\u0000\u001d\u001e\u0005\u0001\u0000\u0000\u001e \u0003\u0004\u0002\u0000"+
		"\u001f!\u0005\u0002\u0000\u0000 \u001f\u0001\u0000\u0000\u0000 !\u0001"+
		"\u0000\u0000\u0000!$\u0001\u0000\u0000\u0000\"$\u0003\u0004\u0002\u0000"+
		"#\u001c\u0001\u0000\u0000\u0000#\"\u0001\u0000\u0000\u0000$\u0003\u0001"+
		"\u0000\u0000\u0000%(\u0003\u0006\u0003\u0000&(\u0003\u000e\u0007\u0000"+
		"\'%\u0001\u0000\u0000\u0000\'&\u0001\u0000\u0000\u0000(\u0005\u0001\u0000"+
		"\u0000\u0000)*\u0003\b\u0004\u0000*+\u0005\u0016\u0000\u0000+,\u0003\n"+
		"\u0005\u0000,-\u0005\u0017\u0000\u0000-\u0007\u0001\u0000\u0000\u0000"+
		".8\u0005\u0003\u0000\u0000/8\u0005\u0004\u0000\u000008\u0005\u0005\u0000"+
		"\u000018\u0005\u0006\u0000\u000028\u0005\u0007\u0000\u000038\u0005\b\u0000"+
		"\u000048\u0005\t\u0000\u000058\u0005\n\u0000\u000068\u0005\u000b\u0000"+
		"\u00007.\u0001\u0000\u0000\u00007/\u0001\u0000\u0000\u000070\u0001\u0000"+
		"\u0000\u000071\u0001\u0000\u0000\u000072\u0001\u0000\u0000\u000073\u0001"+
		"\u0000\u0000\u000074\u0001\u0000\u0000\u000075\u0001\u0000\u0000\u0000"+
		"76\u0001\u0000\u0000\u00008\t\u0001\u0000\u0000\u00009>\u0003\f\u0006"+
		"\u0000:;\u0005\f\u0000\u0000;=\u0003\f\u0006\u0000<:\u0001\u0000\u0000"+
		"\u0000=@\u0001\u0000\u0000\u0000><\u0001\u0000\u0000\u0000>?\u0001\u0000"+
		"\u0000\u0000?\u000b\u0001\u0000\u0000\u0000@>\u0001\u0000\u0000\u0000"+
		"AB\u0005\u001e\u0000\u0000BC\u0005\u0001\u0000\u0000CH\u0003\u000e\u0007"+
		"\u0000DE\u0005\u001e\u0000\u0000EF\u0005\u0001\u0000\u0000FH\u0005\r\u0000"+
		"\u0000GA\u0001\u0000\u0000\u0000GD\u0001\u0000\u0000\u0000H\r\u0001\u0000"+
		"\u0000\u0000IJ\u0006\u0007\uffff\uffff\u0000JK\u0005\u0014\u0000\u0000"+
		"KL\u0003\u000e\u0007\u0000LM\u0005\f\u0000\u0000MN\u0003\u000e\u0007\b"+
		"NY\u0001\u0000\u0000\u0000OP\u0005\u000f\u0000\u0000PY\u0003\u000e\u0007"+
		"\u0005QY\u0003\u0010\b\u0000RY\u0003\u0012\t\u0000SY\u0005\u001e\u0000"+
		"\u0000TU\u0005\u0016\u0000\u0000UV\u0003\u000e\u0007\u0000VW\u0005\u0017"+
		"\u0000\u0000WY\u0001\u0000\u0000\u0000XI\u0001\u0000\u0000\u0000XO\u0001"+
		"\u0000\u0000\u0000XQ\u0001\u0000\u0000\u0000XR\u0001\u0000\u0000\u0000"+
		"XS\u0001\u0000\u0000\u0000XT\u0001\u0000\u0000\u0000Yk\u0001\u0000\u0000"+
		"\u0000Z[\n\u000b\u0000\u0000[\\\u0005\u0015\u0000\u0000\\j\u0003\u000e"+
		"\u0007\f]^\n\n\u0000\u0000^_\u0005\u0012\u0000\u0000_j\u0003\u000e\u0007"+
		"\u000b`a\n\t\u0000\u0000ab\u0005\u0013\u0000\u0000bj\u0003\u000e\u0007"+
		"\ncd\n\u0007\u0000\u0000de\u0007\u0000\u0000\u0000ej\u0003\u000e\u0007"+
		"\bfg\n\u0006\u0000\u0000gh\u0007\u0001\u0000\u0000hj\u0003\u000e\u0007"+
		"\u0007iZ\u0001\u0000\u0000\u0000i]\u0001\u0000\u0000\u0000i`\u0001\u0000"+
		"\u0000\u0000ic\u0001\u0000\u0000\u0000if\u0001\u0000\u0000\u0000jm\u0001"+
		"\u0000\u0000\u0000ki\u0001\u0000\u0000\u0000kl\u0001\u0000\u0000\u0000"+
		"l\u000f\u0001\u0000\u0000\u0000mk\u0001\u0000\u0000\u0000no\u0005\u0018"+
		"\u0000\u0000o{\u0003\u000e\u0007\u0000pq\u0005\u0019\u0000\u0000q{\u0003"+
		"\u000e\u0007\u0000rs\u0005\u001a\u0000\u0000s{\u0003\u000e\u0007\u0000"+
		"tu\u0005\u001b\u0000\u0000u{\u0003\u000e\u0007\u0000vw\u0005\u001c\u0000"+
		"\u0000w{\u0003\u000e\u0007\u0000xy\u0005\u001d\u0000\u0000y{\u0003\u000e"+
		"\u0007\u0000zn\u0001\u0000\u0000\u0000zp\u0001\u0000\u0000\u0000zr\u0001"+
		"\u0000\u0000\u0000zt\u0001\u0000\u0000\u0000zv\u0001\u0000\u0000\u0000"+
		"zx\u0001\u0000\u0000\u0000{\u0011\u0001\u0000\u0000\u0000|}\u0007\u0002"+
		"\u0000\u0000}\u0013\u0001\u0000\u0000\u0000\u000b\u0017 #\'7>GXikz";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}