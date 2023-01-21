// 2) Escreva uma função que receba como parâmetros três vetores, X, Y e Z. A função
// deverá encontrar os valores que estejam simultaneamente em X e Y e salvá-los em Z,
// caso um valor tenha múltipla duplicidade ele deverá ser escrito apenas uma vez em Z
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* intersection(int* X, int* Y, int sizeX, int sizeY, int* sizeZ);

int main () {

    int sizeX, sizeY;
    scanf("%d", &sizeX);
    scanf("%d", &sizeY);

    int* X = (int*)malloc(sizeX * sizeof(int));
    int* Y = (int*)malloc(sizeY * sizeof(int));

    int i;
    srand(time(NULL));
    for(i = 0; i < sizeX; i++) {
        X[i] = rand() % 10; 
    }

    printf("X: ");
    for(i = 0; i < sizeX; i++) {
        printf("%d ", X[i]);
    }
    printf("\n");

    i = 0;
    while(i < sizeY) {
        Y[i] =rand() % 10;
        i++;
    }

    printf("Y: ");
    for(i = 0; i < sizeY; i++) {
        printf("%d ", Y[i]);
    }
    printf("\n");

    int sizeZ;
    int* Z = intersection(X, Y, sizeX, sizeY, &sizeZ);


    printf("Z: ");
    for(i = 0; i < sizeZ; i++) {
        printf("%d ", Z[i]);
    }
    printf("\n");

    
    free(X);
    free(Y);
    free(Z);
    return 0;
}


int* intersection(int* X, int* Y, int sizeX, int sizeY, int* sizeZ) {
    int* Z = (int*)malloc(sizeof(int));
    int i, j, k = 0;
    for(i = 0; i < sizeX; i++) {
        for(j = 0; j < sizeY; j++) {
            if(X[i] == Y[j]) {
                Z[k++] = X[i];
                Z = (int*)realloc(Z, (k + 1) * sizeof(int));
                break;
            }
        }
    }
    *sizeZ = k;
    return Z;
}