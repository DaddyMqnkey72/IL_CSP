//IL 7th random
#include <stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
    srand(time(NULL));
    char fam [][15]={"isaiah","Izzy","isa"};
    for(int i=0; i<5; i++){
    int num = rand() % 3 ;
    printf("our random person is %s\n", fam [num]);
    }
    return 0;
}