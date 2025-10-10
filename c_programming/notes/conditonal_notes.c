//Il 7th conditional notes
#include <stdio.h>
#include<string.h>

int main (void){
    int grade;
    char name[50];
    printf("what is your grade percent");
    scanf("%d", &grade);

    printf("what is your name");
    scanf("%d", &name);

printf("%d\n", strcmp(name, "isaiah"));
if(name== "isaiah"){
    printf("you do not get a grade\n");
}

    if(grade >=90){;
        printf("you have an A\n");
    }else if(grade >=80){
        printf("you have a B\n");
    }else if (grade>=70){
        printf("you have a C\n");
    }else{ 
        printf("you are failing:(\n)");
    }
    
       







    return 0;
}




    

//What puts something inside of the “if” statement?
    //(condition)
//How are conditions written in C?
    // else, if and else if
//How do we write elif conditions in C?
    // else if
//When do else conditions run?
    // after the if condition
//What are the 3 logical operators in C?
    // && for and, || for or, and ! for not







