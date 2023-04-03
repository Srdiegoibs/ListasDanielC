// 9) Escreva um programa que para uma matriz quadrada de ordem arbitrária seja
// determinada a soma dos elementos cinzas para cada um dos seguintes casos:
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int **mat, order, i, j, sum = 0;
    order = 10;

    mat = (int**) malloc(order * sizeof(int*));
    for (i = 0; i < order; i++) {
        mat[i] = (int*) malloc(order * sizeof(int));
    }

    srand(time(NULL));
    for (i = 0; i < order; i++) {
        for (j = 0; j < order; j++) {
            mat[i][j] = rand() % 9 + 1;

        }
    }

    for (i = 0; i < order; i++) {
        for (j = 0; j < order; j++) {
            printf("%d ",  mat[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    int len = order-1;
    for (i = 0; i < order; i++) {
        for (j = 0; j < order-i-1; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int sum_selected(int order, int **mat, int op) {
    int sum = 0;
    for (int i = 0; i < order; i++) {
        for (int j = 0; j < order; j++){
            if (i < j && i+j < order-1 && op = 1) {
                    
            }
        }
    }
}
