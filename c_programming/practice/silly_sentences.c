//IL 7th silly snetences 
#include <stdio.h>// 

char celebrity[50];
char restaurant[50];
char food[50];

int main(void){

    printf("Welcome a silly sentences maker! Answer the following questions! (please only one word answers!!)\n");

    printf("Who is you favorite celebrity?\n");
    scanf("%s", celebrity);
    printf("What is your favorite place to eat?\n");
    scanf("%s", restaurant);
    printf("What is you favorite food?\n");
    scanf("%s", food);
    

    printf("You were on a run when %s saw you and you guys ran to %s and ate %s", celebrity, restaurant, food);
    
    return 0;
}
