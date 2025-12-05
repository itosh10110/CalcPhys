# UNIVERSIDAD PERUANA DE CIENCIAS APLICADAS

## FACULTAD DE INGENIERÍA

### PHISYCODE, LA CALCULADORA DE FÍSICA EN ANTLR

**Curso:** Teoría de Compiladores

**Sección:** 1731

**Docente:** Carnaval Sánchez, Luis Martín

**Grupo N°:** 03

**Integrantes:**

- Meléndez Marín, Diego Fernando (U202220345)
- Torres Araujo, Jilary Avril (U20231b148)
- Canchis Fernández, Mauricio Andrés (U202318106)

**Ciclo:** 2025-20

---

## Índice

1. Introducción
2. Problemática y Motivación
3. Objetivo
4. Diseño de lenguaje
5. Gramática en ANTLR4
6. Repositorio y pruebas iniciales
7. Conclusiones
8. Anexos

---

## 1. Introducción

El presente trabajo aborda el diseño y la implementación de **PhysiCode**, un lenguaje de programación específico de dominio (DSL) diseñado como una calculadora avanzada para física clásica.

Utilizando la herramienta **ANTLR4** y **Python**, se ha desarrollado un intérprete que procesa un lenguaje de scripting capaz de resolver tanto operaciones matemáticas complejas como ecuaciones de diversas áreas de la física, como cinemática (MRU, MRUV, caída libre, trabajo y energía mecánicos, MAS, MCU, mecánica celeste), dinámica y energía mecánica.

El objetivo es ofrecer una sintaxis intuitiva y funcional que simplifique la resolución de problemas físicos en un entorno computacional.

---

## 2. Problemática y Motivación

Tradicionalmente, resolver problemas de física computacionalmente exige escribir código en lenguajes de propósito general, lo que implica una sintaxis verbosa y una curva de aprendizaje que distrae del objetivo principal: la física. Por ejemplo, para calcular la velocidad final, un usuario tendría que gestionar variables, importar librerías matemáticas y aplicar fórmulas manualmente.

La motivación de **PhysiCode** es eliminar esa fricción, proporcionando un lenguaje donde las operaciones físicas son funciones de primera clase, permitiendo a estudiantes y profesionales plantear y resolver problemas de manera directa y eficiente, casi como si estuvieran usando una calculadora científica especializada.

---

## 3. Objetivo

El objetivo principal del proyecto es diseñar e implementar un intérprete, usando Python y ANTLR4, para un DSL que funcione como una calculadora de física clásica y matemática.

### Objetivos específicos

- Definir una sintaxis de scripting que soporte asignación de variables, expresiones matemáticas (aritmética, potencias, raíces, logaritmos, trigonometría) y funciones específicas para la física.
- Desarrollar una gramática formal en ANTLR4 que defina la estructura de las expresiones y comandos del lenguaje.
- Implementar un programa en Python que utilice el parser generado por ANTLR para leer un script, interpretar las operaciones y calcular los resultados solicitados, gestionando un entorno de variables.
- Realizar pruebas funcionales que validen tanto las operaciones matemáticas como la correcta resolución de problemas de física usando las funciones predefinidas del lenguaje (`cl`, `mru`, `mruv`, `em`).

---

## 4. Diseño de lenguaje

El lenguaje **PhysiCode** es un lenguaje de scripting interpretado. Su sintaxis está basada en expresiones y asignaciones de variables.

### Reglas básicas

- **Asignación de variables:** Ejemplo: `velocidad = 10 * 2;`
- **Expresiones matemáticas:** Incluye `+`, `-`, `*`, `/`, `pot`, `r`, `log`, `%`.
- **Funciones trigonométricas:** `cos()`, `sen()`, `tg()`, `sec()`, `csc()`, `ctg()`
- **Funciones de física:** Incluyen MRU, MRUV, caída libre, energía mecánica, MAS, MCU, fluidos, mecánica celeste, etc.

### Ejemplo de sintaxis

```c
// Calcular velocidad final en MRUV
velocidad_final = mruv(v0=10, a=2, t=5);

// Calcular la energía mecánica
energia_total = em(m=2, v=3, h=10);
```

---

## 5. Gramática en ANTLR4

La gramática `CalcFis.g4` define la totalidad del lenguaje, desde el programa principal, expresiones matemáticas y físicas, hasta reglas léxicas y sintácticas.

```antlr
grammar CalcFis;

// Parser
prog: statement* EOF;

// Ahora las reglas de statement
statement
    : ID '=' expr ';'? # assignStat
    | expr # stmtExpr
    ;

expr
    : fisExpr # ExprFis
    | matExpr # ExprMat
    ;

fisExpr
    : oper '(' pars ')' # OperPars
    ;

oper
    : 'cl'
    | 'mru'
    | 'mruv'
    | 'tm'
    | 'mcel'
    | 'mas'
    | 'flu'
    | 'mcu'
    | 'em'
    ;

pars
    : par (',' par)*
    ;

par
    : ID '=' matExpr
    ;

matExpr
    : matExpr 'r' matExpr
    | matExpr 'pot' matExpr
    | matExpr '%' matExpr
    | 'log' matExpr ',' matExpr
    | matExpr ('*' | '/') matExpr
    | matExpr ('+' | '-') matExpr
    | '-' matExpr
    | fun
    | num
    | ID
    | '(' matExpr ')'
    ;

fun
    : 'cos' matExpr
    | 'sen' matExpr
    | 'tg' matExpr
    | 'sec' matExpr
    | 'csc' matExpr
    | 'ctg' matExpr
    ;

num
    : INT
    | FLOAT
    ;

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

// Lexer
ID: [a-zA-Z_][a-zA-Z_0-9]* ;
INT: [+-]?[0-9]+ ;
FLOAT: [+-]?[0-9]+'.'[0-9]+ ;
WS: [ \t\n\r]+ -> skip ;
```

---

## 6. Repositorio y pruebas iniciales

El proyecto se encuentra disponible en:
**[https://github.com/itosh10110/CalcPhys](https://github.com/itosh10110/CalcPhys)**

Incluye:

- La gramática `CalcFis.g4`
- Driver principal en Python
- Visitor con implementación de reglas semánticas
- Archivos generados (`CalcFisLexer.py`, `CalcFisParser.py`)

### Prueba (`test2.xd`)

```c
a = 5 + 6 / 3;
b = (4 pot 5) + 1;
v = 5;
mru(d=160, v=v);
```

Salida esperada:

```
a = 7.0
b = 1025
v = 5
Tiempo recorrido: 32.0 s
```

---

## 7. Arquitectura actualizada del compilador

### Componentes integrados

1. **ANTLR4:** Generación del AST
2. **IR Builder (LLVM):** Traducción a IR SSA
3. **Optimizador:** `InstCombine`, `Reassociate`, `GVN`, `CFGSimplification`
4. **ORC JIT:** Ejecución directa del IR optimizado

### Optimizaciones con LLVM

- Eliminación de redundancia
- Propagación de constantes
- Simplificación algebraica
- Optimización del flujo de control

### Ejecución JIT

Permite ejecutar funciones en memoria sin recompilar todo, acelerando cálculos físicos.

### Validación

- `a = 5 + 6 / 3` → 7
- `b = (4 pot 5) + 1` → 1025
- `mru(d=160, v=5)` → 32.0 s

---

## 8. Conclusiones

- PhysiCode demuestra el potencial de ANTLR4 para construir DSLs robustos.
- La gramática es sólida y el Visitor permite separar sintaxis de semántica.
- El uso de LLVM y JIT convierte el proyecto en un compilador moderno y eficiente.
- El lenguaje cumple su propósito de simplificar la resolución de problemas físicos.

---

## 9. Anexos

**Repositorio del proyecto:**
[https://github.com/itosh10110/CalcPhys](https://github.com/itosh10110/CalcPhys)

**Video:**
[https://youtu.be/VPuzy98eeiY](https://youtu.be/VPuzy98eeiY)
