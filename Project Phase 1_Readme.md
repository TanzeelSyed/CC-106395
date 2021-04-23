#CC Spring 2021: Project Phase 1#
###PROJECT MEMBERS###
StdID | Name
------------ | -------------
**60790** | **Syed Muhammad Tanzeel** <!--this is the group leader in bold-->
 61574 | Muhammad Hassam Uddin
<!-- Replace name and student ids with acutally group member names and ids-->

## Language Selected ##
We selected "Mini Java" for our Project in Compiler Contruction which is offered in Spr-21
<!--Replace with your choice-->

## About Mini Java: ##
The sense of a Java programme determines the intent of a MiniJava programme. Every MiniJava programme is a complete Java programme that adheres to Java semantics. It has a few hierarchical control constructors, as well as classes and restricted inheritance. It also has simple data types and simple data types.
Each MiniJava programme consists of a single file with no package declarations or imports. One or more Java classes make up this object. 
There are no interface classes, subclasses, or nested classes in the classes, making them simple and easy to understand.

## Sample Code 01 ##
       
       class kiet {
       public static void main(String[] a)
       {
               System.out.println(“Sir Farooq teaching us Compiler contruction");
       }
       
 ## Sample Code 02 (Array) ##      
    class Arr {
        public static void main(String[] a){
            System.out.println(new NewClass().cal());
        }
    }
    class NewClass {
        int [] x;
        public int cal() {
            int [] y;
            x = new int [20];
            y = new int [76];
            y[0] = 7;
            y[2] = 77;
            x[45] = 42;
            return y[0] + x[y[2]-5];
        }
    }
    
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

## Context Free Grammar (CFG) ##

• A CFG is a set of A -> X1X2... Xn (n 0) outputs. We may write either A-> or A -> if n is equal to 0.

• T stands for tokens, which are also known as terminals.

• N, the non-terminal series (A, B, C... ). In grammar, the start symbol is a non-terminal.

• Productions A, A..., abbreviated A | |...



