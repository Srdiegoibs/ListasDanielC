#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MIN_N 1
#define MAX_N 100

int main() {

    int n;

    for (n = MIN_N; n <= MAX_N; n++) {
        // check to see if n is a prime number
        int is_prime = 1; 
        for (int i = 2; i <= sqrt(n); i++) 
            if (n % i == 0) {
                is_prime = 0;
                break;
            }
        
        // print the number if it is a prime number
        if (is_prime) printf("%d\n", n);
    }

    return 0;
}