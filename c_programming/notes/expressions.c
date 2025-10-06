//IL 7th Expression notes
#include <stdio.h>
#include <math.h>

int main(void){
    int year =2025;
    float pi = 3.14;
    double long_pi = 3.14159265359;
    
    printf("%d\n", year);
    printf("&d", 8/3);
    printf("%f.2\n", 8.0/3);
    printf("%d\n", (int) pow(2, 4));

    year += 1; //compoumd assignment operator
    printf("%\n", year);
    year++; //incrimentor
    printf("%d\n", year);

    return 0;

}











//What is the difference between an integer and a float in C?
    //one only has whole numbers and the other has decimals
//How does C handle integer division compared to float division?
    //  integer division truncates the decimal, float division keeps the decimal
//List the arithmetic operators available in C and their functions.
    //+, -, *,/,%
//What is the modulus operator, and how is it used?
    //it gives the reminader of divison operation
//How do you round a float to the nearest integer in C?
    //round() with math.h
//What is type casting in C? Provide an example of explicit type casting.
    //it is converting one data to another like (int) 3.14 converts the final float to 3.14
//How do compound assignment operators work in C? List three examples.
    //they combine arithmetic operation with assigment, such as +=, -=, *=
//What is the purpose of the math.h library? Name three functions it provides.
    //it provides mathmatecial functions
//How do you print a float with a specific number of decimal places using printf()?
    //use %.mf where n is the number of decimal places
//What happens when you mix integer and float operations in C?
    //the integer is promoted to a float and the operation is perfromed as a float orperation
