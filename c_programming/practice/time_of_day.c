//Il 7th time of day
#include <stdio.h>



int main(void) {
    int time;

    printf("What is the time in military time?: ");
    scanf("%d", &time);

    if (time < 12) {
        printf("Good Morning!\n");
    } else if (time < 18) {
        printf("Good Afternoon!\n");
    } else {
        printf("Good Evening!\n");
    }

    return 0;
}