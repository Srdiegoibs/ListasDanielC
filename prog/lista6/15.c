// 15) Faça um programa que calcule a multiplicação de duas matrizes quadradas, o
// programa deve funcionar para um número arbitrário de elementos.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3


int **fillmatrix(int **matrix);
int **multmatrix(int **matrix1, int **matrix2);
void printmatrix(int **matrix);
void freeall(int **matrix1, int **matrix2, int **result);

int main()
{
    int **matrix1;
    int **matrix2;
    int **matrix3;

    srand(time(NULL));
    matrix1 = fillmatrix(matrix1);
    matrix2 = fillmatrix(matrix2);
    matrix3 = multmatrix(matrix1, matrix2);

    printf("Matrix 1:\n");
    printmatrix(matrix1);

    printf("\nMatrix 2:\n");
    printmatrix(matrix2);

    printf("\nMatrix 3:\n");
    printmatrix(matrix3);

    freeall(matrix1, matrix2, matrix3);
    return 0;
}

int **fillmatrix(int **matrix)
{
    int i, j;
    matrix = (int **)malloc(sizeof(int *) * SIZE);
    for (i = 0; i < SIZE; i++)
        matrix[i] = (int *)malloc(sizeof(int) * SIZE);

    for (i = 0; i < SIZE; i++)
        for (j = 0; j < SIZE; j++)
            matrix[i][j] = rand() % 9 + 1;

    return matrix;
}

void printmatrix(int **matrix)
{
    int i, j;
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
}

int **multmatrix(int **matrix1, int **matrix2)
{
    int i, j, k;
    int **result = (int **)malloc(sizeof(int *) * SIZE);
    for (i = 0; i < SIZE; i++)
        result[i] = (int *)malloc(sizeof(int) * SIZE);

    for (i = 0; i < SIZE; i++)
        for (j = 0; j < SIZE; j++)
        {
            result[i][j] = 0;
            for (k = 0; k < SIZE; k++)
                result[i][j] += matrix1[i][k] * matrix1[k][j];
        }

    return result;
}

void freeall(int **matrix1, int **matrix2, int **result)
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        free(matrix1[i]);
        free(matrix2[i]);
        free(result[i]);
    }

    free(matrix1);
    free(matrix2);
    free(result);
}