// IL 7thloops notes
#include <stdio.h> 

int main(void){
    int nums[]={1,654,4,56,8,742,5}; // arrays
    char candies[][20]={"kitkat","skittles","nerds","hershey","Reeses"};

    for(int x = 0; x < 7; x++){
        printf("%d\n", nums[x]);
    }

    for (int i=0; i< 5; i++){
        printf("%s, is my favorite candy\n", candies[i]);
    }
    for(int num = 1; num < 11; num++){
        printf("%d\n", num);

    }

    int num=0;
    while(num<11){
        printf("%d\n", num);
        num++;
    }


    return 0;
}






//What is a loop? 
    //a running sequence 
//What are the two types of loops?
    //for loops and why loops
//What is iteration
    //one time through a loop
//What are arrays? 
    //list
//How do you make lists in C? 
    // using {}
//How do you make for loops in C? 
    //using thr for loop
//How do you make while loops in C?
    //using the why loops