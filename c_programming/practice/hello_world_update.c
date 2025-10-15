//IL 7th hello world update

#include <stdio.h>

void add(char name[]){
      printf("Hello %s!\n",name);
}

int main(void){
    char name[50];

    printf("what is your name?\n");
    scanf("%s", name);
    add(name);

    add("Enzo");
    add("Archie");
    add("Gyan");
    add("Jesus");
    return 0;
}