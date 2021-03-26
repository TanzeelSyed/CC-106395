#CC Spring 2021: Project Phase 1#
###PROJECT MEMBERS###
StdID | Name
------------ | -------------
**60790** | **Syed Muhammad Tanzeel** <!--this is the group leader in bold-->
 61574 | Muhammad Hassam Uddin
<!-- Replace name and student ids with acutally group member names and ids-->

## Language Selected ##
Mini Java
<!--Replace with your choice-->
## Example of main constructs ##

package com.jcg.ifelse;
public class Example3 {
    public static void main(String[] args) {
      
        int salary= 1250;
        
        if(salary < 500) {  
            System.out.println("Salary is less than 500.");
        } else if (salary >= 500 && salary < 1000) {
            System.out.println("Salary is greater than 500 but less than 1000.");
        } else if (salary >= 1000 && salary < 2000) {
            System.out.println("Salary is greater than 1000 but less than 2000.");
        } else if (salary > 2000) {
            System.out.println("Salary is greater than 2000.");
        } else {
            System.out.println("Invalid!");
        }
    }
}