// Generated from c:/Users/Mauricio/Documents/SEXTO CICLO/Compiladores/TF/src/CalcFis.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link CalcFisParser}.
 */
public interface CalcFisListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link CalcFisParser#prog}.
	 * @param ctx the parse tree
	 */
	void enterProg(CalcFisParser.ProgContext ctx);
	/**
	 * Exit a parse tree produced by {@link CalcFisParser#prog}.
	 * @param ctx the parse tree
	 */
	void exitProg(CalcFisParser.ProgContext ctx);
	/**
	 * Enter a parse tree produced by the {@code assignStat}
	 * labeled alternative in {@link CalcFisParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterAssignStat(CalcFisParser.AssignStatContext ctx);
	/**
	 * Exit a parse tree produced by the {@code assignStat}
	 * labeled alternative in {@link CalcFisParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitAssignStat(CalcFisParser.AssignStatContext ctx);
	/**
	 * Enter a parse tree produced by the {@code stmtExpr}
	 * labeled alternative in {@link CalcFisParser#statement}.
	 * @param ctx the parse tree
	 */
	void enterStmtExpr(CalcFisParser.StmtExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code stmtExpr}
	 * labeled alternative in {@link CalcFisParser#statement}.
	 * @param ctx the parse tree
	 */
	void exitStmtExpr(CalcFisParser.StmtExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code ExprFis}
	 * labeled alternative in {@link CalcFisParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterExprFis(CalcFisParser.ExprFisContext ctx);
	/**
	 * Exit a parse tree produced by the {@code ExprFis}
	 * labeled alternative in {@link CalcFisParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitExprFis(CalcFisParser.ExprFisContext ctx);
	/**
	 * Enter a parse tree produced by the {@code ExprMat}
	 * labeled alternative in {@link CalcFisParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterExprMat(CalcFisParser.ExprMatContext ctx);
	/**
	 * Exit a parse tree produced by the {@code ExprMat}
	 * labeled alternative in {@link CalcFisParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitExprMat(CalcFisParser.ExprMatContext ctx);
	/**
	 * Enter a parse tree produced by the {@code OperPars}
	 * labeled alternative in {@link CalcFisParser#fisExpr}.
	 * @param ctx the parse tree
	 */
	void enterOperPars(CalcFisParser.OperParsContext ctx);
	/**
	 * Exit a parse tree produced by the {@code OperPars}
	 * labeled alternative in {@link CalcFisParser#fisExpr}.
	 * @param ctx the parse tree
	 */
	void exitOperPars(CalcFisParser.OperParsContext ctx);
	/**
	 * Enter a parse tree produced by the {@code operCaidaLibre}
	 * labeled alternative in {@link CalcFisParser#oper}.
	 * @param ctx the parse tree
	 */
	void enterOperCaidaLibre(CalcFisParser.OperCaidaLibreContext ctx);
	/**
	 * Exit a parse tree produced by the {@code operCaidaLibre}
	 * labeled alternative in {@link CalcFisParser#oper}.
	 * @param ctx the parse tree
	 */
	void exitOperCaidaLibre(CalcFisParser.OperCaidaLibreContext ctx);
	/**
	 * Enter a parse tree produced by the {@code operMRU}
	 * labeled alternative in {@link CalcFisParser#oper}.
	 * @param ctx the parse tree
	 */
	void enterOperMRU(CalcFisParser.OperMRUContext ctx);
	/**
	 * Exit a parse tree produced by the {@code operMRU}
	 * labeled alternative in {@link CalcFisParser#oper}.
	 * @param ctx the parse tree
	 */
	void exitOperMRU(CalcFisParser.OperMRUContext ctx);
	/**
	 * Enter a parse tree produced by the {@code operMRUV}
	 * labeled alternative in {@link CalcFisParser#oper}.
	 * @param ctx the parse tree
	 */
	void enterOperMRUV(CalcFisParser.OperMRUVContext ctx);
	/**
	 * Exit a parse tree produced by the {@code operMRUV}
	 * labeled alternative in {@link CalcFisParser#oper}.
	 * @param ctx the parse tree
	 */
	void exitOperMRUV(CalcFisParser.OperMRUVContext ctx);
	/**
	 * Enter a parse tree produced by the {@code operTrabajMec}
	 * labeled alternative in {@link CalcFisParser#oper}.
	 * @param ctx the parse tree
	 */
	void enterOperTrabajMec(CalcFisParser.OperTrabajMecContext ctx);
	/**
	 * Exit a parse tree produced by the {@code operTrabajMec}
	 * labeled alternative in {@link CalcFisParser#oper}.
	 * @param ctx the parse tree
	 */
	void exitOperTrabajMec(CalcFisParser.OperTrabajMecContext ctx);
	/**
	 * Enter a parse tree produced by the {@code operMCeleste}
	 * labeled alternative in {@link CalcFisParser#oper}.
	 * @param ctx the parse tree
	 */
	void enterOperMCeleste(CalcFisParser.OperMCelesteContext ctx);
	/**
	 * Exit a parse tree produced by the {@code operMCeleste}
	 * labeled alternative in {@link CalcFisParser#oper}.
	 * @param ctx the parse tree
	 */
	void exitOperMCeleste(CalcFisParser.OperMCelesteContext ctx);
	/**
	 * Enter a parse tree produced by the {@code operMAS}
	 * labeled alternative in {@link CalcFisParser#oper}.
	 * @param ctx the parse tree
	 */
	void enterOperMAS(CalcFisParser.OperMASContext ctx);
	/**
	 * Exit a parse tree produced by the {@code operMAS}
	 * labeled alternative in {@link CalcFisParser#oper}.
	 * @param ctx the parse tree
	 */
	void exitOperMAS(CalcFisParser.OperMASContext ctx);
	/**
	 * Enter a parse tree produced by the {@code operFluidos}
	 * labeled alternative in {@link CalcFisParser#oper}.
	 * @param ctx the parse tree
	 */
	void enterOperFluidos(CalcFisParser.OperFluidosContext ctx);
	/**
	 * Exit a parse tree produced by the {@code operFluidos}
	 * labeled alternative in {@link CalcFisParser#oper}.
	 * @param ctx the parse tree
	 */
	void exitOperFluidos(CalcFisParser.OperFluidosContext ctx);
	/**
	 * Enter a parse tree produced by the {@code operMCU}
	 * labeled alternative in {@link CalcFisParser#oper}.
	 * @param ctx the parse tree
	 */
	void enterOperMCU(CalcFisParser.OperMCUContext ctx);
	/**
	 * Exit a parse tree produced by the {@code operMCU}
	 * labeled alternative in {@link CalcFisParser#oper}.
	 * @param ctx the parse tree
	 */
	void exitOperMCU(CalcFisParser.OperMCUContext ctx);
	/**
	 * Enter a parse tree produced by the {@code operEnergMec}
	 * labeled alternative in {@link CalcFisParser#oper}.
	 * @param ctx the parse tree
	 */
	void enterOperEnergMec(CalcFisParser.OperEnergMecContext ctx);
	/**
	 * Exit a parse tree produced by the {@code operEnergMec}
	 * labeled alternative in {@link CalcFisParser#oper}.
	 * @param ctx the parse tree
	 */
	void exitOperEnergMec(CalcFisParser.OperEnergMecContext ctx);
	/**
	 * Enter a parse tree produced by the {@code ParPar}
	 * labeled alternative in {@link CalcFisParser#pars}.
	 * @param ctx the parse tree
	 */
	void enterParPar(CalcFisParser.ParParContext ctx);
	/**
	 * Exit a parse tree produced by the {@code ParPar}
	 * labeled alternative in {@link CalcFisParser#pars}.
	 * @param ctx the parse tree
	 */
	void exitParPar(CalcFisParser.ParParContext ctx);
	/**
	 * Enter a parse tree produced by the {@code declID}
	 * labeled alternative in {@link CalcFisParser#par}.
	 * @param ctx the parse tree
	 */
	void enterDeclID(CalcFisParser.DeclIDContext ctx);
	/**
	 * Exit a parse tree produced by the {@code declID}
	 * labeled alternative in {@link CalcFisParser#par}.
	 * @param ctx the parse tree
	 */
	void exitDeclID(CalcFisParser.DeclIDContext ctx);
	/**
	 * Enter a parse tree produced by the {@code declIDUnknown}
	 * labeled alternative in {@link CalcFisParser#par}.
	 * @param ctx the parse tree
	 */
	void enterDeclIDUnknown(CalcFisParser.DeclIDUnknownContext ctx);
	/**
	 * Exit a parse tree produced by the {@code declIDUnknown}
	 * labeled alternative in {@link CalcFisParser#par}.
	 * @param ctx the parse tree
	 */
	void exitDeclIDUnknown(CalcFisParser.DeclIDUnknownContext ctx);
	/**
	 * Enter a parse tree produced by the {@code MinMatExpr}
	 * labeled alternative in {@link CalcFisParser#matExpr}.
	 * @param ctx the parse tree
	 */
	void enterMinMatExpr(CalcFisParser.MinMatExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code MinMatExpr}
	 * labeled alternative in {@link CalcFisParser#matExpr}.
	 * @param ctx the parse tree
	 */
	void exitMinMatExpr(CalcFisParser.MinMatExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code FunMatExpr}
	 * labeled alternative in {@link CalcFisParser#matExpr}.
	 * @param ctx the parse tree
	 */
	void enterFunMatExpr(CalcFisParser.FunMatExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code FunMatExpr}
	 * labeled alternative in {@link CalcFisParser#matExpr}.
	 * @param ctx the parse tree
	 */
	void exitFunMatExpr(CalcFisParser.FunMatExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code PowerMatExpr}
	 * labeled alternative in {@link CalcFisParser#matExpr}.
	 * @param ctx the parse tree
	 */
	void enterPowerMatExpr(CalcFisParser.PowerMatExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code PowerMatExpr}
	 * labeled alternative in {@link CalcFisParser#matExpr}.
	 * @param ctx the parse tree
	 */
	void exitPowerMatExpr(CalcFisParser.PowerMatExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code ParenMatExpr}
	 * labeled alternative in {@link CalcFisParser#matExpr}.
	 * @param ctx the parse tree
	 */
	void enterParenMatExpr(CalcFisParser.ParenMatExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code ParenMatExpr}
	 * labeled alternative in {@link CalcFisParser#matExpr}.
	 * @param ctx the parse tree
	 */
	void exitParenMatExpr(CalcFisParser.ParenMatExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code ModMatExpr}
	 * labeled alternative in {@link CalcFisParser#matExpr}.
	 * @param ctx the parse tree
	 */
	void enterModMatExpr(CalcFisParser.ModMatExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code ModMatExpr}
	 * labeled alternative in {@link CalcFisParser#matExpr}.
	 * @param ctx the parse tree
	 */
	void exitModMatExpr(CalcFisParser.ModMatExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code RootMatExpr}
	 * labeled alternative in {@link CalcFisParser#matExpr}.
	 * @param ctx the parse tree
	 */
	void enterRootMatExpr(CalcFisParser.RootMatExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code RootMatExpr}
	 * labeled alternative in {@link CalcFisParser#matExpr}.
	 * @param ctx the parse tree
	 */
	void exitRootMatExpr(CalcFisParser.RootMatExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code MulDivMatExpr}
	 * labeled alternative in {@link CalcFisParser#matExpr}.
	 * @param ctx the parse tree
	 */
	void enterMulDivMatExpr(CalcFisParser.MulDivMatExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code MulDivMatExpr}
	 * labeled alternative in {@link CalcFisParser#matExpr}.
	 * @param ctx the parse tree
	 */
	void exitMulDivMatExpr(CalcFisParser.MulDivMatExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code AddSubMatExpr}
	 * labeled alternative in {@link CalcFisParser#matExpr}.
	 * @param ctx the parse tree
	 */
	void enterAddSubMatExpr(CalcFisParser.AddSubMatExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code AddSubMatExpr}
	 * labeled alternative in {@link CalcFisParser#matExpr}.
	 * @param ctx the parse tree
	 */
	void exitAddSubMatExpr(CalcFisParser.AddSubMatExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code IdMatExpr}
	 * labeled alternative in {@link CalcFisParser#matExpr}.
	 * @param ctx the parse tree
	 */
	void enterIdMatExpr(CalcFisParser.IdMatExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code IdMatExpr}
	 * labeled alternative in {@link CalcFisParser#matExpr}.
	 * @param ctx the parse tree
	 */
	void exitIdMatExpr(CalcFisParser.IdMatExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code LogMatExpr}
	 * labeled alternative in {@link CalcFisParser#matExpr}.
	 * @param ctx the parse tree
	 */
	void enterLogMatExpr(CalcFisParser.LogMatExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code LogMatExpr}
	 * labeled alternative in {@link CalcFisParser#matExpr}.
	 * @param ctx the parse tree
	 */
	void exitLogMatExpr(CalcFisParser.LogMatExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code NumMatExpr}
	 * labeled alternative in {@link CalcFisParser#matExpr}.
	 * @param ctx the parse tree
	 */
	void enterNumMatExpr(CalcFisParser.NumMatExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code NumMatExpr}
	 * labeled alternative in {@link CalcFisParser#matExpr}.
	 * @param ctx the parse tree
	 */
	void exitNumMatExpr(CalcFisParser.NumMatExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code CosMatExpr}
	 * labeled alternative in {@link CalcFisParser#fun}.
	 * @param ctx the parse tree
	 */
	void enterCosMatExpr(CalcFisParser.CosMatExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code CosMatExpr}
	 * labeled alternative in {@link CalcFisParser#fun}.
	 * @param ctx the parse tree
	 */
	void exitCosMatExpr(CalcFisParser.CosMatExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code SenMatExpr}
	 * labeled alternative in {@link CalcFisParser#fun}.
	 * @param ctx the parse tree
	 */
	void enterSenMatExpr(CalcFisParser.SenMatExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code SenMatExpr}
	 * labeled alternative in {@link CalcFisParser#fun}.
	 * @param ctx the parse tree
	 */
	void exitSenMatExpr(CalcFisParser.SenMatExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code TgMatExpr}
	 * labeled alternative in {@link CalcFisParser#fun}.
	 * @param ctx the parse tree
	 */
	void enterTgMatExpr(CalcFisParser.TgMatExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code TgMatExpr}
	 * labeled alternative in {@link CalcFisParser#fun}.
	 * @param ctx the parse tree
	 */
	void exitTgMatExpr(CalcFisParser.TgMatExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code SecMatExpr}
	 * labeled alternative in {@link CalcFisParser#fun}.
	 * @param ctx the parse tree
	 */
	void enterSecMatExpr(CalcFisParser.SecMatExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code SecMatExpr}
	 * labeled alternative in {@link CalcFisParser#fun}.
	 * @param ctx the parse tree
	 */
	void exitSecMatExpr(CalcFisParser.SecMatExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code CscMatExpr}
	 * labeled alternative in {@link CalcFisParser#fun}.
	 * @param ctx the parse tree
	 */
	void enterCscMatExpr(CalcFisParser.CscMatExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code CscMatExpr}
	 * labeled alternative in {@link CalcFisParser#fun}.
	 * @param ctx the parse tree
	 */
	void exitCscMatExpr(CalcFisParser.CscMatExprContext ctx);
	/**
	 * Enter a parse tree produced by the {@code CtgMatExpr}
	 * labeled alternative in {@link CalcFisParser#fun}.
	 * @param ctx the parse tree
	 */
	void enterCtgMatExpr(CalcFisParser.CtgMatExprContext ctx);
	/**
	 * Exit a parse tree produced by the {@code CtgMatExpr}
	 * labeled alternative in {@link CalcFisParser#fun}.
	 * @param ctx the parse tree
	 */
	void exitCtgMatExpr(CalcFisParser.CtgMatExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link CalcFisParser#num}.
	 * @param ctx the parse tree
	 */
	void enterNum(CalcFisParser.NumContext ctx);
	/**
	 * Exit a parse tree produced by {@link CalcFisParser#num}.
	 * @param ctx the parse tree
	 */
	void exitNum(CalcFisParser.NumContext ctx);
}