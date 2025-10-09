//Il 7th string notes
#include <stdio.h>
#include <string.h>

int main(void){
    char name[]="isaiah";

    char last_name[25];
    printf("tell me your last name: \n");
    scanf("%s", last_name);
    char full_name[50];
    printf("[%s]\n", full_name);
    strcat(full_name, name);
    printf("[%s]\n", full_name); 

    print("%c\n", last_name[0]);
    last_name[0]= 'r';

    strcat(full_name, " ");
    printf("[%s]\n", full_name);

    strcat(full_name, last_name);
    printf("[%s]\n", full_name);


    printf("your name is %s %s", name, last_name);
    printf("%zu", strlen(name));
    return 0;
}






//What is the difference between a string and a character?
    //you can't leave your bracktes blank
//What types of quotation marks do we need for a string?
    //"" for string
//What library do we need to include to access the string functions in C?
    //#include.h
//List functions the library allows us to use.
    //strlen()
    //sizeof()
//How do we concatenate strings in C?
    //strcat(variable_name, what adding)
//How do we get individual characters from a string in C?
    //cal the name of the variable using %c