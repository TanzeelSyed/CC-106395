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
            int [] y;   //local variable 
            x = new int [20];
            y = new int [76];
            y[0] = 7;
            y[2] = 77;
            x[45] = 42;
            return y[0] + x[y[2]-5];
        }
    }
    
 ## Lexical Specifications ##
    • Identifier:
