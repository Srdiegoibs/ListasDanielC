//Escreva um programa que receba uma quantidade variável de números inteiros por
//linha de comando e calcule a média.
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    int i;
    int sum = 0;
    int count = argc - 1;

    if (count == 0) {
        printf("Nenhum numero informado.\n");
        return 1;
    }

    for (i = 0; i <= count; i++) {
        sum += atoi(argv[i]);
    }

    float average = (float) sum / count;
    printf("A media e: %.2f\n", average);

    return 0;
}
