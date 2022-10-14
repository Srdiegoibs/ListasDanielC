#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    srand((unsigned int) time(NULL));
    int target = rand() % 99 + 1;
    int guess = 0;

    do {
        scanf("%d", &guess);
        printf("%d\n", guess);
        if (guess == target) {
            printf("You guessed it!\n");
            printf("The target was %d\n", target);
            break;
        }
        else if (guess > target)
            printf("Too high!\n");
        
        else
            printf("Too low!\n");

    } while (target != guess);

    return 0;
}