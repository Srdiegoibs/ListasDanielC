// 8) Faça um programa que multiplique duas matrizes. Pesquise a forma correta de
// realizar este procedimento. Utilize matrizes preenchidas estaticamente. Devem ser
// impressas as duas matrizes originais e a matriz resultante da multiplicação. Atenção:
// para que duas matrizes possam ser multiplicadas, a quantidade de colunas da primeira
// matriz deve ser igual à quantidade de linhas da segunda matriz. Essa verificação deve
// ser feita pelo programa.
#include <stdio.h>

#define ROWS 3
#define COLS 3

void multiply_matrices(int matrix1[][COLS], int matrix2[][COLS], int result[][COLS]) {
    if (COLS != ROWS) {
        printf("Matrizes não podem ser multiplicadas.\n");
        return;
    }

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = 0;
            for (int k = 0; k < COLS; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int matrix1[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[ROWS][COLS] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[ROWS][COLS];

    multiply_matrices(matrix1, matrix2, result);


    printf("Matriz 1:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("Matriz 2:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    printf("Resultado da multiplicação:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
