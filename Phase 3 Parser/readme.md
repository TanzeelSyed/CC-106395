## PARSER ##
<!-- Replace XX with your course ID-->
## PROJECT MEMBERS 
StdID | Name
------------ | -------------
**60790** | **Syed Muhammad Tanzeel** 
61574 | Muhammad Hassam Uddin

## About Project ##

The primary goal of this project was to comprehend the significance of a compiler. It is  important to understand how to use a compiler and what goes on inside the tool we're using. It provides the ability to create and deploy our own domain-specific language. The compiler's architecture allows for the use of formal methods that are seldom used in other programming languages.
Compiler analysis is an effective tool to get acquainted with systematic methods. As a way, studying compiler will give us a lot. That was also the aim of our project; we learned how to use a subset of a broad language, as well as its specifications and CFG. We also learned how to build a lexical analyzer and build a parser using lexical specifications.

## Language used in parser

We select Minijava for design parser. In essence, the minijava language is a more condensed and updated version of java. It is a programming language based on the Java language of Sun Microsystems. The heart of MiniJava is a condense version of the standard Java release to relieve fears that starting people feel in the face of a Java environment that is too complex. The purpose of a MiniJava program is determined by its significance in Java. Any MiniJava program is a Java program that completely works according to Java semanticization. It supports classes and minimal heritage, basic types of data and a few hierarchical control builders. MiniJava program is a single file with no package statement or imports. It consists of a Java class or more. There are no interface classes, sub-classes or nested classes in the classes that are basic and fast.

## BubbleSort Implementation in MiniJava Language
class BS{
    public static void main(String[] a){
	System.out.println(new BBS().Start(10));
    }
}


// The class includes the list of integer and methods for starting, printing and sorting the array using Bubblesort
class BS{
    
    ## BubbleSort Implementation in MiniJava Language
```java
`
```MiniJava
class BubbleSort{
    public static void main(String[] a){
	System.out.println(new BBS().Start(10));
    }
}


// This class contains the array of integers and methods to initialize, print and sort the array using Bublesort
class BS{
    
    int[] number ;
    int size ;

    // Invoke the Initialization, Sort and Printing Methods
    public int Start(int b){
	int aux01 ;
	aux01 = this.Init(b);
	aux01 = this.Print();
	System.out.println(99999);
	aux01 = this.Sort();
	aux01 = this.Print();
	return 0 ;
    }

 
    // Sort array of integers using Bublesort method
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
	    //aux03 = i+1 ;
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

    // Printing
    public int Print(){
	int j ;
	j = 0 ;
	while (j < (size)) {
	    System.out.println(number[j]);
	    j = j + 1 ;
	}
	return 0 ;
    }
    
    // Initializing array of integers
    public int Init(int b){
	size = b ;
	number = new int[b] ;
	
	number[0] = 4 ;
	number[1] = 20  ; 
	number[2] = 12 ;
	number[3] = 16 ;
	number[4] = 10 ; 
	number[5] = 1 ;
	number[6] = 6  ; 
	number[7] = 9  ; 
	number[8] = 2 ; 
	number[9] = 5  ;
	
	return 0 ;	
    }

}
````
## Lexical Specifications ##
  
**• Identifier:**
    
A series of letters, underscores, and digits that starts with an underscore or a letter and continues with any number of letters, underscores, or digits is referred to as an identifier. Only the letters A to Z and a to z are allowed, with case being the most important factor. IDENTs aren't the same as keywords.

**• Operators and Keywords:**

The tokens in bold in the grammar classification are keywords or operators. The exceptions are Main, String, System, Out, and Println. They are identifiers rather than keywords.

 **• Integral Literals:**
 
The numeric integer literal is a digit sequence that begins with any one of the digits 1 through 9 and concludes with any digits from 0 to 9. As an integer literal, a single 0 can also be used.

**• White Spaces and Comments:**
 
 White space includes things like space, new line, carriage return. While tabulator and The string /* is followed by any characters before the terminating / in a comment. Any subsequent / within a statement will be ignored; a comment will always end when the first */ is identified.
 
**Literals/identifiers/operators/Punctuations**

GTHAN = ">"

LTHAN = "<"

EQUALS = "=="

NEQUALS = "! ="

NUMBER =""

IDENTIFIER = ""

PLUS ="+"

DIVISION ="/"

AND ="&&"

OR ="||"

MINUS ="-"

BECOMES = "="

INTO = "*"

COMMA = ","

SEMICOLON = ";"

DOT ="."

**Keywords**

VOID ="void"

WHILE ="while"

TRUE ="true"

RETURN ="return"

PUBLIC ="public"

THIS ="this"

STATIC ="static"

PRIVATE ="private"

INT =”int”

NEW ="new"

NULL ="null"

BOOLEAN=”boolean”

CLASS ="class"

IF ="if"

ELSE ="else"

**Tokens and brackets**

EOT = "$"

ERRORS = ""

ERROR COMMENTS = "<unclosed_comments>"

WHITESPEACES = " "

RBRACKET = "]"

LCURLY = "{"

RCURLY = "}"

LPAREN = "("

RPAREN = ")"

LBRACKET = "["

### Grammar

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

MethodInvocationExpression → (PrimaryExpression .)?    IDENT(ExpressionList?)

ExpressionList → Expression(, Expression)\*

FieldAccessExpression → (PrimaryExpression .)? IDENT

LocalVariableReferenceExpression → IDENT

NewObjectExpression → new IDENT ( )

# Problems Faced

These are the following problems that we have faced in our project.

## Problem 1: No Background of Java
So before this project both of us had zero knowledge about java. Our domain area is react native (javaScript) but we though that why not give it a shot and do something that we haven't done before. So we decided to take up on MiniJava as it's a smaller component of Java language. Initially we had many difficulties like we didn't knew how it works, how can we declare variable and methods, its syntax and so many things like this. But once we learned and got basic knowledge about it then we had no such difficulty. 

## Problem 2: Github
So I (Rohma) didn't knew how to use this platform Github as none of our teacher asked to submit projects on Github so it was my first time using it. Initially i didn't knew how to make repositiories and such things. I had very difficulties in formatting the content in Files and making repository etc. but my other group member had hands on it so he helped in using this platform. And now i have learned how to use Github.  

## Problem 3: Installation of Flex in Linux
When we created our lexical analyzer we had many issues in its compilation. Our lex file wasn't created because of installation issues in linux, so after trying so many times finally we got succeed.

## Problem 4: YACC Compilation
When we merged our lex and yacc file means (.l & .y extension file). We had so many errors in it's compilations like (undefined reference or function in y file, redeifintions, declaration and so on). We had no idea about them because we never worked on such environment. It's our first time when we designed parser so most of the errors were new to us so we researched, took guide from videos and book and then finally after spending several hours on it we resolved them.

## References

- [Github] (https://github.com/starbops/MJP)
- [Website] (https://courses.engr.illinois.edu/cs421/sp2012/mps/MP3/mp3.pdf)
- [Webiste] (https://www.mrcoder.org/en/compiler/minijava/introduction/)
- [Tutorial] (https://www.youtube.com/watch?v=246sQu7ty00&t=581s) 
