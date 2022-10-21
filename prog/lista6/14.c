// 14) Modifique o anterior para ordem decrescente.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main()
{
    int *array = malloc(sizeof(int) * SIZE);
    int temp = 0, i = 0, j = 0;


    srand(time(NULL));
    for (i = 0; i < SIZE; i++)
    {
        array[i] = rand() % 99 + 1; 
        printf("%d ", array[i]);
    }

    for (i = 0; i < SIZE; i++)
    {
        for (j = i + 1; j < SIZE; j++)
        {
            if (array[i] < array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
  
    free(array);
    return 0;
}