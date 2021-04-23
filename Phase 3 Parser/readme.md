## CC 106395: Lexical Analyzer and Parser using MiniJava ##
<!-- Replace XX with your course ID-->
## PROJECT MEMBERS 
StdID | Name
------------ | -------------
**60790** | **Syed Muhammad Tanzeel** 
61574 | Muhammad Hassam Uddin

## About Project ##

The primary goal of this project was to comprehend the significance of a compiler. It is  important to understand how to use a compiler and what goes on inside the tool we're using. It provides the ability to create and deploy our own domain-specific language. The compiler's architecture allows for the use of formal methods that are seldom used in other programming languages.
Compiler analysis is an effective tool to get acquainted with systematic methods. As a way, studying compiler will give us a lot. That was also the aim of our project; we learned how to use a subset of a broad language, as well as its specifications and CFG. We also learned how to build a lexical analyzer and build a parser using lexical specifications.

## Sample Language Used ##

We select Minijava for design parser. In essence, the minijava language is a more condensed and updated version of java. It is a programming language based on the Java language of Sun Microsystems. The heart of MiniJava is a condense version of the standard Java release to relieve fears that starting people feel in the face of a Java environment that is too complex. The purpose of a MiniJava program is determined by its significance in Java. Any MiniJava program is a Java program that completely works according to Java semanticization. It supports classes and minimal heritage, basic types of data and a few hierarchical control builders. MiniJava program is a single file with no package statement or imports. It consists of a Java class or more. There are no interface classes, sub-classes or nested classes in the classes that are basic and fast.

## Implementation (Code Example)

```java
`
```MiniJava
class BS{
    public static void main(String[] a){
	System.out.println(new BBS().Start(10));
    }
}


// The class includes the list of integer and methods for starting, printing and sorting the array using Bubblesort algo
class BS{
    
    int[] number ;
    int size ;

    // Call on methods of initialisation, sorting and printing
    public int Start(int b){
	int aux01 ;
	aux01 = this.Init(b);
	aux01 = this.Print();
	System.out.println(99999);
	aux01 = this.Sort();
	aux01 = this.Print();
	return 0 ;
    }

 
    // Order the whole collection
    public int Sort(){
	int nt ;
	int i ;
	int aux02 ;
	int aux04 ;
	int aux05 ;
	int aux06 ;
	int aux07 ;
	int j ;
	int t ;
	i = size - 1 ;
	aux02 = 0 - 1 ;
	while (aux02 < i) {
	    j = 1 ;
	    
	    while (j < (i+1)){
		aux07 = j - 1 ;
		aux04 = number[aux07] ;
		aux05 = number[j] ;
		if (aux05 < aux04) {
		    aux06 = j - 1 ;
		    t = number[aux06] ;
		    number[aux06] = number[j] ;
		    number[j] = t;
		}
		else nt = 0 ;
		j = j + 1 ;
	    }
	    i = i - 1 ;
	}
	return 0 ;
    }

    // Print
    public int Print(){
	int j ;
	j = 0 ;
	while (j < (size)) {
	    System.out.println(number[j]);
	    j = j + 1 ;
	}
	return 0 ;
    }
    
    // Initialize
    public int Init(int b){
	size = b ;
	number = new int[b] ;
	
	number[0] = 3 ;
	number[1] = 40  ; 
	number[2] = 22 ;
	number[3] = 15 ;
	number[4] = 17 ; 
	number[5] = 3 ;
	number[6] = 2  ; 
	number[7] = 5  ; 
	number[8] = 1 ; 
	number[9] = 6  ;
	
	return 0 ;	
    }

}
````
## Lexical Specification

The following are the lexical specifications found in MiniJava Language:

##### • White Spaces:
Space, new line, carriage return, and tabulator are examples of white space.

##### • Comments:
A comment is described as the string /* followed by any characters until the terminating /. Comments cannot be nested, and any subsequent / inside a comment would be ignored; a comment will always end when the first */ is detected.

##### • Keywords: and operators:
In the grammar classification, all tokens in bold are keywords or operators. Main, String, System, Out, and Println are all exceptions. They are not keywords, but rather identifiers.

##### • Integer Literals:
A numeric integer literal is a digit sequence that starts with any digit from 1 to 9 and ends with any number of digits from 0 to 9. A single 0 can be used as an integer literal as well.

##### • Identifier:
An identifier is a string of letters, underscores, and digits that begins with an underscore or a letter and continues with any number of letters, underscores, or digits. Only the letters A to Z and a to z are permitted, with case being crucial. IDENTs are not keywords.

# LEXICAL TOKENS

### Literals/identifiers/operators

NUMBER =""

IDENTIFIER = ""

PLUS ="+"

MINUS ="-"

BECOMES = "="

INTO = "*"

DIVISION ="/"

AND ="&&"

OR ="||"

GTHAN = ">"

LTHAN = "<"

EQUALS = "=="

NEQUALS = "! ="

### Punctuations

DOT ="."

COMMA = ","

SEMICOLON = ";"

### Reserved Words

BOOLEAN=”boolean”

CLASS ="class"

IF ="if"

ELSE ="else"

INT =”int”

NEW ="new"

NULL ="null"

VOID ="void"

WHILE ="while"

TRUE ="true"

RETURN ="return"

PUBLIC ="public"

THIS ="this"

STATIC ="static"

PRIVATE ="private"

### Brackets and Tokens: ###

LPAREN = "("

RPAREN = ")"

LBRACKET = "["

RBRACKET = "]"

LCURLY = "{"

RCURLY = "}"

EOT = "$"

ERRORS = ""

ERROR COMMENTS = "<unclosed_comments>"

WHITESPEACES = " "

## Problems Faced ##

## Problem 1: Not Much Familar with Java: ##
We faced several issues during performing this project because we are not familar much about Java and Mini Java but we tried our best to do this. We took help to our seniors to perform this project. The reason behind selection of this language i can say that the concepts of Java are much easier which are relatable too. An object oriented property makes it a flexible, system modular, and extensible programming language.

## Problem 2: Yacc Problems: ##
It is very difficult to work on Yacc because facing a lots of error and we are working very first time on it. Not much content available on internet to solve error issues of Yacc. somehow we managed to solve all those errors but still things are lacking we did our best enough to work on this platform.

## Problem 3: Flex Problems: ##
What to do with error handling, and how to make it all work together. Working on flex, also became a nightmare for us. No clue, no info and not much enough content available on internet to resolve things but trying our best to manage things, asking with seniors to solve the issue and watching tutorials on youtube.

## Grammer ##
Program → ClassDeclaration*

ClassDeclaration → class IDENT(extends IDENT)? { ClassMember * }

ClassMember → Field | Method | MainMethod

Field → public Type IDENT ;

MainMethod → public static void main ( String [ ] IDENT ) Block

Method → public Type IDENT ( Parameters? ) Block

Parameters → Parameter | Parameter , Parameters

Parameter → Type IDENT

Type → int | boolean | void | IDENT

Statement → Block

| EmptyStatement

| IfStatement

PrintStatement

| ExpressionStatement

| WhileStatement

| ReturnStatement

Block → { BlockStatement* }

BlockStatement → Statement | LocalVariableDeclarationStatement

LocalVariableDeclarationStatement → Type IDENT(= Expression)? ;

EmptyStatement → ;

WhileStatement → while ( Expression ) Statement

IfStatement → if ( Expression ) Statement(else Statement)?

PrintStatement → PrintStatementHead . println ( Expression ) ;

PrintStatementHead → ( PrintStatementHead ) | System . out

ExpressionStatement → Expression ;

ReturnStatement → return Expression? ;

Expression → AssignmentExpression

AssignmentExpression → LogicalOrExpression(= AssignmentExpression)?

LogicalOrExpression → (LogicalOrExpression ||)? LogicalAndExpression

LogicalAndExpression → (LogicalAndExpression &&)? EqualityExpression

EqualityExpression → (EqualityExpression(== | !=))? RelationalExpression

RelationalExpression → (RelationalExpression(< | <= | > | >=))?

AdditiveExpression → (AdditiveExpression(+ | -))?

MultiplicativeExpression → (MultiplicativeExpression(* | / | %))?

UnaryExpression → PrimaryExpression | (! | -)

PrimaryExpression → null

| false

| true

| INTEGER_LITERAL

| MethodInvocationExpression

| FieldAccessExpression

| LocalVariableReferenceExpression

| this

| ( Expression )

| NewObjectExpression

MethodInvocationExpression → (PrimaryExpression .)? IDENT(ExpressionList?)

ExpressionList → Expression(, Expression)*

FieldAccessExpression → (PrimaryExpression .)? IDENT

LocalVariableReferenceExpression → IDENT

NewObjectExpression → new IDENT ( )

## References ##
https://tomassetti.me/parsing-in-java/

https://www.youtube.com/watch?v=bxpc9Pp5pZM

https://blog.eduonix.com/java-programming-2/write-parser-java/

https://www.infoworld.com/article/2076874/lexical-analysis-and-java--part-1.html

https://www.infoworld.com/article/2077611/lexical-analysis--part-2---build-an-application.html

https://github.com/Francesco182g/Lexical-Analyzer-1

https://github.com/MarcosSpessatto/Lexical-Analyzer-Java
