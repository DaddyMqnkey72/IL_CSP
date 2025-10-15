//Il 7th 
#include <stdio.h>
#include <string.h>
                

int main(void) {
    char family[5][20] = {"Zoey", "Israel", "Juan", "Rohann", "Gyan"};

    for (int i = 0; i < 5; i++) {
        printf("Hello, %s!\n", family[i]);
    }
    return 0;
}