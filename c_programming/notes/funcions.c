//Il 7th function notes
#include <stdio.h>
void birthday(char* name, int age){
    printf("happy birthday to you my brudda\n");
    printf("happy birthday to you my brudda\n");
    printf("happy birthday dear %s\n",name);
    printf("happy birthday to you my brudda\n");
    printf("happy birthday %s you are %d\n", name, age);
}

int mul(int x, int y){
    return x *y;
}

float get_number(char* type){
    float value;
    print("how many %s do you have:", type);
    scanf("%f", &value);
    return value;
}

int main(void){
    
    birthday("jesus", 15);
    birthday("gwen",14);
    birthday("israel",15);
    int product = mul(8,5);
    printf("%d\n", product);
    printf("%d\n", mul(4,6));
    float pencils = get_number ("pencils");
    float notebooks = get_number ("notebooks");
    printf("you have %.2 pecils and %.f notebooks", pencils, notebooks);
    return 0;
}








//what a function is
    //a piece of codue thst can be reused many times before you call it
//Why we use functions
    //so we do nit need to write the same thing numerous times
//How to write a function in C
    //void birthday(void)
///What are arguments and parameters?
    //they are a variable only in a funcion
//How do arguments and parameters work together?
    //parameters is when the variable is defined, arguments is when it is given a value
//How to use parameters and arguments in C
    //you use them to change the output of a function
//What are return statements?
    //putting a value out of a function
//How do return statements change how you define a function in C?
    //using a different dat type
//What do return statements do with the information?
    //place it where you call the function


