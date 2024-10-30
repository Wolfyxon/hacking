#include <stdio.h>
#include <stdbool.h>

int main(void) {
    printf("Convince me to let you in or do something:");

    char convince[64];
    scanf("%s", &convince);
    printf("\n");

    bool convinced = false;
    
    if(convinced) {
        printf("Alright. Are you impressed?");
    } else {
        printf("nuh uh");
    }

    printf("\n");
}