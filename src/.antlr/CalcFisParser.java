// Generated from c:/Users/Mauricio/Documents/SEXTO CICLO/Compiladores/TF/CalcPhys/src/CalcFis.g4 by ANTLR 4.13.1
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
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, ADD=15, SUB=16, MUL=17, 
		DIV=18, POW=19, MOD=20, LOG=21, ROOT=22, LPAR=23, RPAR=24, COS=25, SEN=26, 
		TG=27, SEC=28, CSC=29, CTG=30, PRINT=31, ID=32, INT=33, FLOAT=34, STRING=35, 
		WS=36;
	public static final int
		RULE_prog = 0, RULE_statement = 1, RULE_expr = 2, RULE_printExpr = 3, 
		RULE_stringExpr = 4, RULE_fisExpr = 5, RULE_oper = 6, RULE_pars = 7, RULE_par = 8, 
		RULE_matExpr = 9, RULE_fun = 10, RULE_num = 11;
	private static String[] makeRuleNames() {
		return new String[] {
			"prog", "statement", "expr", "printExpr", "stringExpr", "fisExpr", "oper", 
			"pars", "par", "matExpr", "fun", "num"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'='", "';'", "'cl'", "'mru'", "'mruv'", "'tm'", "'mcel'", "'mas'", 
			"'flu'", "'mcu'", "'em'", "'ele'", "','", "'?'", "'+'", "'-'", "'*'", 
			"'/'", "'pot'", "'%'", "'log'", "'r'", "'('", "')'", "'cos'", "'sen'", 
			"'tg'", "'sec'", "'csc'", "'ctg'", "'ppp'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, "ADD", "SUB", "MUL", "DIV", "POW", "MOD", "LOG", "ROOT", 
			"LPAR", "RPAR", "COS", "SEN", "TG", "SEC", "CSC", "CTG", "PRINT", "ID", 
			"INT", "FLOAT", "STRING", "WS"
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
			setState(27);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 68696481784L) != 0)) {
				{
				{
				setState(24);
				statement();
				}
				}
				setState(29);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(30);
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
			setState(39);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
			case 1:
				_localctx = new AssignStatContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(32);
				match(ID);
				setState(33);
				match(T__0);
				setState(34);
				expr();
				setState(36);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__1) {
					{
					setState(35);
					match(T__1);
					}
				}

				}
				break;
			case 2:
				_localctx = new StmtExprContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(38);
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
	public static class ExprStringContext extends ExprContext {
		public StringExprContext stringExpr() {
			return getRuleContext(StringExprContext.class,0);
		}
		public ExprStringContext(ExprContext ctx) { copyFrom(ctx); }
	}
	@SuppressWarnings("CheckReturnValue")
	public static class ExprPrintContext extends ExprContext {
		public PrintExprContext printExpr() {
			return getRuleContext(PrintExprContext.class,0);
		}
		public ExprPrintContext(ExprContext ctx) { copyFrom(ctx); }
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
			setState(45);
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
			case T__11:
				_localctx = new ExprFisContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(41);
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
				setState(42);
				matExpr(0);
				}
				break;
			case PRINT:
				_localctx = new ExprPrintContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(43);
				printExpr();
				}
				break;
			case STRING:
				_localctx = new ExprStringContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(44);
				stringExpr();
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
	public static class PrintExprContext extends ParserRuleContext {
		public PrintExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_printExpr; }
	 
		public PrintExprContext() { }
		public void copyFrom(PrintExprContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class ThePrintExprContext extends PrintExprContext {
		public TerminalNode PRINT() { return getToken(CalcFisParser.PRINT, 0); }
		public TerminalNode LPAR() { return getToken(CalcFisParser.LPAR, 0); }
		public TerminalNode RPAR() { return getToken(CalcFisParser.RPAR, 0); }
		public List<ExprContext> expr() {
			return getRuleContexts(ExprContext.class);
		}
		public ExprContext expr(int i) {
			return getRuleContext(ExprContext.class,i);
		}
		public List<TerminalNode> STRING() { return getTokens(CalcFisParser.STRING); }
		public TerminalNode STRING(int i) {
			return getToken(CalcFisParser.STRING, i);
		}
		public ThePrintExprContext(PrintExprContext ctx) { copyFrom(ctx); }
	}

	public final PrintExprContext printExpr() throws RecognitionException {
		PrintExprContext _localctx = new PrintExprContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_printExpr);
		int _la;
		try {
			_localctx = new ThePrintExprContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(47);
			match(PRINT);
			setState(48);
			match(LPAR);
			setState(51); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				setState(51);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
				case 1:
					{
					setState(49);
					expr();
					}
					break;
				case 2:
					{
					setState(50);
					match(STRING);
					}
					break;
				}
				}
				setState(53); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & 68696481784L) != 0) );
			setState(55);
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
	public static class StringExprContext extends ParserRuleContext {
		public StringExprContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stringExpr; }
	 
		public StringExprContext() { }
		public void copyFrom(StringExprContext ctx) {
			super.copyFrom(ctx);
		}
	}
	@SuppressWarnings("CheckReturnValue")
	public static class TheStringExprContext extends StringExprContext {
		public TerminalNode STRING() { return getToken(CalcFisParser.STRING, 0); }
		public TheStringExprContext(StringExprContext ctx) { copyFrom(ctx); }
	}

	public final StringExprContext stringExpr() throws RecognitionException {
		StringExprContext _localctx = new StringExprContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_stringExpr);
		try {
			_localctx = new TheStringExprContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(57);
			match(STRING);
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
		enterRule(_localctx, 10, RULE_fisExpr);
		try {
			_localctx = new OperParsContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(59);
			oper();
			setState(60);
			match(LPAR);
			setState(61);
			pars();
			setState(62);
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
	public static class OperElectroContext extends OperContext {
		public OperElectroContext(OperContext ctx) { copyFrom(ctx); }
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
		enterRule(_localctx, 12, RULE_oper);
		try {
			setState(74);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__2:
				_localctx = new OperCaidaLibreContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(64);
				match(T__2);
				}
				break;
			case T__3:
				_localctx = new OperMRUContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(65);
				match(T__3);
				}
				break;
			case T__4:
				_localctx = new OperMRUVContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(66);
				match(T__4);
				}
				break;
			case T__5:
				_localctx = new OperTrabajMecContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(67);
				match(T__5);
				}
				break;
			case T__6:
				_localctx = new OperMCelesteContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(68);
				match(T__6);
				}
				break;
			case T__7:
				_localctx = new OperMASContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(69);
				match(T__7);
				}
				break;
			case T__8:
				_localctx = new OperFluidosContext(_localctx);
				enterOuterAlt(_localctx, 7);
				{
				setState(70);
				match(T__8);
				}
				break;
			case T__9:
				_localctx = new OperMCUContext(_localctx);
				enterOuterAlt(_localctx, 8);
				{
				setState(71);
				match(T__9);
				}
				break;
			case T__10:
				_localctx = new OperEnergMecContext(_localctx);
				enterOuterAlt(_localctx, 9);
				{
				setState(72);
				match(T__10);
				}
				break;
			case T__11:
				_localctx = new OperElectroContext(_localctx);
				enterOuterAlt(_localctx, 10);
				{
				setState(73);
				match(T__11);
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
		enterRule(_localctx, 14, RULE_pars);
		int _la;
		try {
			_localctx = new ParParContext(_localctx);
			enterOuterAlt(_localctx, 1);
			{
			setState(76);
			par();
			setState(81);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__12) {
				{
				{
				setState(77);
				match(T__12);
				setState(78);
				par();
				}
				}
				setState(83);
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
		enterRule(_localctx, 16, RULE_par);
		try {
			setState(90);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
			case 1:
				_localctx = new DeclIDContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(84);
				match(ID);
				setState(85);
				match(T__0);
				setState(86);
				matExpr(0);
				}
				break;
			case 2:
				_localctx = new DeclIDUnknownContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(87);
				match(ID);
				setState(88);
				match(T__0);
				setState(89);
				match(T__13);
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
		int _startState = 18;
		enterRecursionRule(_localctx, 18, RULE_matExpr, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(107);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LOG:
				{
				_localctx = new LogMatExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(93);
				match(LOG);
				setState(94);
				matExpr(0);
				setState(95);
				match(T__12);
				setState(96);
				matExpr(8);
				}
				break;
			case SUB:
				{
				_localctx = new MinMatExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(98);
				match(SUB);
				setState(99);
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
				setState(100);
				fun();
				}
				break;
			case INT:
			case FLOAT:
				{
				_localctx = new NumMatExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(101);
				num();
				}
				break;
			case ID:
				{
				_localctx = new IdMatExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(102);
				match(ID);
				}
				break;
			case LPAR:
				{
				_localctx = new ParenMatExprContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(103);
				match(LPAR);
				setState(104);
				matExpr(0);
				setState(105);
				match(RPAR);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(126);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,11,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(124);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
					case 1:
						{
						_localctx = new RootMatExprContext(new MatExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_matExpr);
						setState(109);
						if (!(precpred(_ctx, 11))) throw new FailedPredicateException(this, "precpred(_ctx, 11)");
						setState(110);
						match(ROOT);
						setState(111);
						matExpr(12);
						}
						break;
					case 2:
						{
						_localctx = new PowerMatExprContext(new MatExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_matExpr);
						setState(112);
						if (!(precpred(_ctx, 10))) throw new FailedPredicateException(this, "precpred(_ctx, 10)");
						setState(113);
						match(POW);
						setState(114);
						matExpr(11);
						}
						break;
					case 3:
						{
						_localctx = new ModMatExprContext(new MatExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_matExpr);
						setState(115);
						if (!(precpred(_ctx, 9))) throw new FailedPredicateException(this, "precpred(_ctx, 9)");
						setState(116);
						match(MOD);
						setState(117);
						matExpr(10);
						}
						break;
					case 4:
						{
						_localctx = new MulDivMatExprContext(new MatExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_matExpr);
						setState(118);
						if (!(precpred(_ctx, 7))) throw new FailedPredicateException(this, "precpred(_ctx, 7)");
						setState(119);
						_la = _input.LA(1);
						if ( !(_la==MUL || _la==DIV) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(120);
						matExpr(8);
						}
						break;
					case 5:
						{
						_localctx = new AddSubMatExprContext(new MatExprContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_matExpr);
						setState(121);
						if (!(precpred(_ctx, 6))) throw new FailedPredicateException(this, "precpred(_ctx, 6)");
						setState(122);
						_la = _input.LA(1);
						if ( !(_la==ADD || _la==SUB) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(123);
						matExpr(7);
						}
						break;
					}
					} 
				}
				setState(128);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,11,_ctx);
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
		enterRule(_localctx, 20, RULE_fun);
		try {
			setState(141);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case COS:
				_localctx = new CosMatExprContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(129);
				match(COS);
				setState(130);
				matExpr(0);
				}
				break;
			case SEN:
				_localctx = new SenMatExprContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(131);
				match(SEN);
				setState(132);
				matExpr(0);
				}
				break;
			case TG:
				_localctx = new TgMatExprContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(133);
				match(TG);
				setState(134);
				matExpr(0);
				}
				break;
			case SEC:
				_localctx = new SecMatExprContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(135);
				match(SEC);
				setState(136);
				matExpr(0);
				}
				break;
			case CSC:
				_localctx = new CscMatExprContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(137);
				match(CSC);
				setState(138);
				matExpr(0);
				}
				break;
			case CTG:
				_localctx = new CtgMatExprContext(_localctx);
				enterOuterAlt(_localctx, 6);
				{
				setState(139);
				match(CTG);
				setState(140);
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
		enterRule(_localctx, 22, RULE_num);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(143);
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
		case 9:
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
		"\u0004\u0001$\u0092\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0001"+
		"\u0000\u0005\u0000\u001a\b\u0000\n\u0000\f\u0000\u001d\t\u0000\u0001\u0000"+
		"\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0003\u0001"+
		"%\b\u0001\u0001\u0001\u0003\u0001(\b\u0001\u0001\u0002\u0001\u0002\u0001"+
		"\u0002\u0001\u0002\u0003\u0002.\b\u0002\u0001\u0003\u0001\u0003\u0001"+
		"\u0003\u0001\u0003\u0004\u00034\b\u0003\u000b\u0003\f\u00035\u0001\u0003"+
		"\u0001\u0003\u0001\u0004\u0001\u0004\u0001\u0005\u0001\u0005\u0001\u0005"+
		"\u0001\u0005\u0001\u0005\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006"+
		"\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006"+
		"\u0003\u0006K\b\u0006\u0001\u0007\u0001\u0007\u0001\u0007\u0005\u0007"+
		"P\b\u0007\n\u0007\f\u0007S\t\u0007\u0001\b\u0001\b\u0001\b\u0001\b\u0001"+
		"\b\u0001\b\u0003\b[\b\b\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001"+
		"\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001"+
		"\t\u0003\tl\b\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001"+
		"\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0005"+
		"\t}\b\t\n\t\f\t\u0080\t\t\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001"+
		"\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0003\n\u008e\b\n\u0001"+
		"\u000b\u0001\u000b\u0001\u000b\u0000\u0001\u0012\f\u0000\u0002\u0004\u0006"+
		"\b\n\f\u000e\u0010\u0012\u0014\u0016\u0000\u0003\u0001\u0000\u0011\u0012"+
		"\u0001\u0000\u000f\u0010\u0001\u0000!\"\u00a7\u0000\u001b\u0001\u0000"+
		"\u0000\u0000\u0002\'\u0001\u0000\u0000\u0000\u0004-\u0001\u0000\u0000"+
		"\u0000\u0006/\u0001\u0000\u0000\u0000\b9\u0001\u0000\u0000\u0000\n;\u0001"+
		"\u0000\u0000\u0000\fJ\u0001\u0000\u0000\u0000\u000eL\u0001\u0000\u0000"+
		"\u0000\u0010Z\u0001\u0000\u0000\u0000\u0012k\u0001\u0000\u0000\u0000\u0014"+
		"\u008d\u0001\u0000\u0000\u0000\u0016\u008f\u0001\u0000\u0000\u0000\u0018"+
		"\u001a\u0003\u0002\u0001\u0000\u0019\u0018\u0001\u0000\u0000\u0000\u001a"+
		"\u001d\u0001\u0000\u0000\u0000\u001b\u0019\u0001\u0000\u0000\u0000\u001b"+
		"\u001c\u0001\u0000\u0000\u0000\u001c\u001e\u0001\u0000\u0000\u0000\u001d"+
		"\u001b\u0001\u0000\u0000\u0000\u001e\u001f\u0005\u0000\u0000\u0001\u001f"+
		"\u0001\u0001\u0000\u0000\u0000 !\u0005 \u0000\u0000!\"\u0005\u0001\u0000"+
		"\u0000\"$\u0003\u0004\u0002\u0000#%\u0005\u0002\u0000\u0000$#\u0001\u0000"+
		"\u0000\u0000$%\u0001\u0000\u0000\u0000%(\u0001\u0000\u0000\u0000&(\u0003"+
		"\u0004\u0002\u0000\' \u0001\u0000\u0000\u0000\'&\u0001\u0000\u0000\u0000"+
		"(\u0003\u0001\u0000\u0000\u0000).\u0003\n\u0005\u0000*.\u0003\u0012\t"+
		"\u0000+.\u0003\u0006\u0003\u0000,.\u0003\b\u0004\u0000-)\u0001\u0000\u0000"+
		"\u0000-*\u0001\u0000\u0000\u0000-+\u0001\u0000\u0000\u0000-,\u0001\u0000"+
		"\u0000\u0000.\u0005\u0001\u0000\u0000\u0000/0\u0005\u001f\u0000\u0000"+
		"03\u0005\u0017\u0000\u000014\u0003\u0004\u0002\u000024\u0005#\u0000\u0000"+
		"31\u0001\u0000\u0000\u000032\u0001\u0000\u0000\u000045\u0001\u0000\u0000"+
		"\u000053\u0001\u0000\u0000\u000056\u0001\u0000\u0000\u000067\u0001\u0000"+
		"\u0000\u000078\u0005\u0018\u0000\u00008\u0007\u0001\u0000\u0000\u0000"+
		"9:\u0005#\u0000\u0000:\t\u0001\u0000\u0000\u0000;<\u0003\f\u0006\u0000"+
		"<=\u0005\u0017\u0000\u0000=>\u0003\u000e\u0007\u0000>?\u0005\u0018\u0000"+
		"\u0000?\u000b\u0001\u0000\u0000\u0000@K\u0005\u0003\u0000\u0000AK\u0005"+
		"\u0004\u0000\u0000BK\u0005\u0005\u0000\u0000CK\u0005\u0006\u0000\u0000"+
		"DK\u0005\u0007\u0000\u0000EK\u0005\b\u0000\u0000FK\u0005\t\u0000\u0000"+
		"GK\u0005\n\u0000\u0000HK\u0005\u000b\u0000\u0000IK\u0005\f\u0000\u0000"+
		"J@\u0001\u0000\u0000\u0000JA\u0001\u0000\u0000\u0000JB\u0001\u0000\u0000"+
		"\u0000JC\u0001\u0000\u0000\u0000JD\u0001\u0000\u0000\u0000JE\u0001\u0000"+
		"\u0000\u0000JF\u0001\u0000\u0000\u0000JG\u0001\u0000\u0000\u0000JH\u0001"+
		"\u0000\u0000\u0000JI\u0001\u0000\u0000\u0000K\r\u0001\u0000\u0000\u0000"+
		"LQ\u0003\u0010\b\u0000MN\u0005\r\u0000\u0000NP\u0003\u0010\b\u0000OM\u0001"+
		"\u0000\u0000\u0000PS\u0001\u0000\u0000\u0000QO\u0001\u0000\u0000\u0000"+
		"QR\u0001\u0000\u0000\u0000R\u000f\u0001\u0000\u0000\u0000SQ\u0001\u0000"+
		"\u0000\u0000TU\u0005 \u0000\u0000UV\u0005\u0001\u0000\u0000V[\u0003\u0012"+
		"\t\u0000WX\u0005 \u0000\u0000XY\u0005\u0001\u0000\u0000Y[\u0005\u000e"+
		"\u0000\u0000ZT\u0001\u0000\u0000\u0000ZW\u0001\u0000\u0000\u0000[\u0011"+
		"\u0001\u0000\u0000\u0000\\]\u0006\t\uffff\uffff\u0000]^\u0005\u0015\u0000"+
		"\u0000^_\u0003\u0012\t\u0000_`\u0005\r\u0000\u0000`a\u0003\u0012\t\ba"+
		"l\u0001\u0000\u0000\u0000bc\u0005\u0010\u0000\u0000cl\u0003\u0012\t\u0005"+
		"dl\u0003\u0014\n\u0000el\u0003\u0016\u000b\u0000fl\u0005 \u0000\u0000"+
		"gh\u0005\u0017\u0000\u0000hi\u0003\u0012\t\u0000ij\u0005\u0018\u0000\u0000"+
		"jl\u0001\u0000\u0000\u0000k\\\u0001\u0000\u0000\u0000kb\u0001\u0000\u0000"+
		"\u0000kd\u0001\u0000\u0000\u0000ke\u0001\u0000\u0000\u0000kf\u0001\u0000"+
		"\u0000\u0000kg\u0001\u0000\u0000\u0000l~\u0001\u0000\u0000\u0000mn\n\u000b"+
		"\u0000\u0000no\u0005\u0016\u0000\u0000o}\u0003\u0012\t\fpq\n\n\u0000\u0000"+
		"qr\u0005\u0013\u0000\u0000r}\u0003\u0012\t\u000bst\n\t\u0000\u0000tu\u0005"+
		"\u0014\u0000\u0000u}\u0003\u0012\t\nvw\n\u0007\u0000\u0000wx\u0007\u0000"+
		"\u0000\u0000x}\u0003\u0012\t\byz\n\u0006\u0000\u0000z{\u0007\u0001\u0000"+
		"\u0000{}\u0003\u0012\t\u0007|m\u0001\u0000\u0000\u0000|p\u0001\u0000\u0000"+
		"\u0000|s\u0001\u0000\u0000\u0000|v\u0001\u0000\u0000\u0000|y\u0001\u0000"+
		"\u0000\u0000}\u0080\u0001\u0000\u0000\u0000~|\u0001\u0000\u0000\u0000"+
		"~\u007f\u0001\u0000\u0000\u0000\u007f\u0013\u0001\u0000\u0000\u0000\u0080"+
		"~\u0001\u0000\u0000\u0000\u0081\u0082\u0005\u0019\u0000\u0000\u0082\u008e"+
		"\u0003\u0012\t\u0000\u0083\u0084\u0005\u001a\u0000\u0000\u0084\u008e\u0003"+
		"\u0012\t\u0000\u0085\u0086\u0005\u001b\u0000\u0000\u0086\u008e\u0003\u0012"+
		"\t\u0000\u0087\u0088\u0005\u001c\u0000\u0000\u0088\u008e\u0003\u0012\t"+
		"\u0000\u0089\u008a\u0005\u001d\u0000\u0000\u008a\u008e\u0003\u0012\t\u0000"+
		"\u008b\u008c\u0005\u001e\u0000\u0000\u008c\u008e\u0003\u0012\t\u0000\u008d"+
		"\u0081\u0001\u0000\u0000\u0000\u008d\u0083\u0001\u0000\u0000\u0000\u008d"+
		"\u0085\u0001\u0000\u0000\u0000\u008d\u0087\u0001\u0000\u0000\u0000\u008d"+
		"\u0089\u0001\u0000\u0000\u0000\u008d\u008b\u0001\u0000\u0000\u0000\u008e"+
		"\u0015\u0001\u0000\u0000\u0000\u008f\u0090\u0007\u0002\u0000\u0000\u0090"+
		"\u0017\u0001\u0000\u0000\u0000\r\u001b$\'-35JQZk|~\u008d";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}