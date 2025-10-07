//IL 7th first program

#include <stdio.h>
int main(void){
    char name [10];



    printf("what is yur name:\n");
    fgets(name, sizeof(name), stdin);
    printf("hello %s, welcome to your first program!",name);
return 0;
}