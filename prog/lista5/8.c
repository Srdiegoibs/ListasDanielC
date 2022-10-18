// 8) Escreva um programa que fatora uma entrada. Por exemplo, para a entrada 12 a saída
// seria “2 2 3”
#include <stdio.h>
#include <stdlib.h>


int main() {
    int n;

    scanf("%d", &n);

    for (int i = 2; i <= n; i++) 
        while (n % i == 0) {
            printf("%d\n", i);
            n /= i;
        }
    
    
    return 0;
}