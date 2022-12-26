// 2) Escreva uma função que receba como parâmetros três vetores, X, Y e Z. A função
// deverá encontrar os valores que estejam simultaneamente em X e Y e salvá-los em Z,
// caso um valor tenha múltipla duplicidade ele deverá ser escrito apenas uma vez em Z
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* intersection(int* X, int* Y, int* Z);

int main () {
    int* X = malloc (7 * sizeof(int));
    int* Y = malloc (7 * sizeof(int));
    int* Z = malloc (7 * sizeof(int));

    for (int i = 0; i < 7; i++) {
      X[i] = (rand() % 10);
      Y[i] = (rand() % 10);
    }

//     for (int i = 0; i < 7; i++) printf("%d\n", X[i]);
//     printf ("\n");
//     for (int i = 0; i < 7; i++) printf("%d\n", Y[i]);

    free(X);
    free(Y);
    free(Z);
    return 0;
}

int* intersection(int* X, int* Y, int* Z) {
    for (int i = 0; i < 7; i++) {
        if(X[i] == Y[i])
    }
}