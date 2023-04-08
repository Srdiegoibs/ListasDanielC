// 9) Escreva um programa que para uma matriz quadrada de ordem arbitrária seja
// determinada a soma dos elementos cinzas para cada um dos seguintes casos:
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sum_selected(int order, int **mat, int op);

int main() {
    int **mat, order, i, j, sum = 0;
    order =3;

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

    // printf("\n");
    // int len = order-1;
    // for (i = 0; i < order; i++) {
    //     for (j = 0; j < order-i-1; j++) {
    //         printf("%d ", mat[i][j]);
    //     }
    //     printf("\n");
    // }


    printf("\n");
    printf("A > %d\n", sum_selected(order, mat, 2));
    printf("B > %d\n", sum_selected(order, mat, 3));
    printf("C > %d\n", sum_selected(order, mat, 4));
    printf("D > %d\n", sum_selected(order, mat, 1));
    printf("E > %d\n", sum_selected(order, mat, 5));
    printf("F > %d\n", sum_selected(order, mat, 6));


    for (int i = 0; i < order; i++) {
        free(mat[i]);
    }
    free(mat);
    return 0;
}


int sum_selected(int order, int **mat, int op) {
    int sum = 0;

    for (int i = 0; i < order; i++) {
        for (int j = 0; j < order; j++){
            if (op == 1) { // (D)
                if (i > j) {
                    sum += mat[i][j];
                }
            }
            else if (op == 2) { //  (A)
                if (i+j < order-1) {
                    sum += mat[i][j];
                }
            }
            else if (op == 3) { // (B)
                if (i+j > order-1) {
                    sum += mat[i][j];
                }
            }
            else if (op == 4) { // (C)
                if (i < j) {
                    sum += mat[i][j];
                }
            }
            else if (op == 5) { // soma das colunas ímpares
                if (j%2 == 1) {
                    sum += mat[i][j];
                }
            }
            else if (op == 6) { // soma das linhas pares
                if (i%2 == 0) {
                    sum += mat[i][j];
                }
            }
        }
    }

  
    return sum;
}
