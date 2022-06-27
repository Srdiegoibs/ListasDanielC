#include <stdio.h>
#include <stdlib.h>

#define MIN_N 1000
#define MAX_N 100000


int main() {
    int number = 0;
    int remainder = 0;
    int reverse = 0;
    int temp = 0;

    for (number=MIN_N; number<=MAX_N; number++) {
        temp = number;
        while (temp != 0) {
            remainder %= 10;
            reverse *= 10 + remainder;
            temp /= 10;
        }
        if (number == reverse) {
            printf("%d\n", number);
        }
        reverse = 0;
    }
    



    free(aux);
    free(ptr);

    return 0;
}
