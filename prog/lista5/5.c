//5) Palíndromos são números que têm o mesmo valor se lidos da esquerda para a direita
// ou da direita para a esquerda. Exemplos: 44, 232, etc. Faça um programa que determine
// e escreva todos os números inteiros entre 1000 que 10000 que são palíndromos.
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
        reverse = 0;
        
        while (temp) {
            remainder = temp % 10;
            reverse = reverse * 10 + remainder;
            temp /= 10;
        }

        if (number == reverse) 
            printf("%d\n", number);
        
    }

    return 0;
}
