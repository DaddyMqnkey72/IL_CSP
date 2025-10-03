// IL 7th variables notes!
#include <stdio.h>

int main (void){   
    int grade; //4bytes
   const float pi = 3.14; // 4 bytes
    double long_pi = 3.1415926358;
    char letter_grade; // 1 byte
    char name []="isaiah";
    //user input
    printf("What is your grade percentage as a whole number: ");
    scanf("%d", &grade);

    printf("what is your letter grade: ");
    scanf(" %c", &letter_grade);

     printf("%s did it!\n", name);
     printf("you have a %d, in the class. That is an %c",grade,letter_grade);
        
    return 0;
    
}

//What is the main difference between declaring variables in Python and C?
    //you have to specify the variable type in c and you end all statements in python
//In C, what is the purpose of specifying a data type when declaring a variable?
    //to save space
//List three common data types used in C and their corresponding format specifiers for printf().
    //intergers 4bytes, floats 3.14 bytes, doubles 3.1415926358
//How do you declare and initialize an integer variable named "age" with the value 25 in C?
    // int age =25
//What is the difference between printf() and scanf() functions in C?
    //
//How do you add comments in C? What are the two types of comments?
    // you use // to add a comment theres a // coment in C and # is python
//What is the purpose of the #include <stdio.h> line at the beginning of a C program?
    //so we can use print statements and allowmus to use inputs
//In C, what is the significance of the main() function?
    //in c eveyrthing mujst be in a functiuon and main is the function running a code
//What is the difference between %d and %f format specifiers in printf()?
    //d will not print a number with a decimal and f will print one with decimals
//How do you print a newline character in C?
    //
//What is the purpose of the & symbol when using scanf() to get user input?

//How do you declare a constant in C? Provide an example.
    //marks a variable so it doiesn't change like const float pi = 3.1415926358
