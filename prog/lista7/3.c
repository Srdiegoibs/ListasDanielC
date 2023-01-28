// 3) Escreva uma função que receba um vetor e ordene-o por ordem crescente ou
// decrescente, de acordo com um parâmetro. OBS: Não deverá ser criado um novo vetor,
// a ordenação deve ocorrer no vetor recebido como parâmetro.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void short_array(int *arr, int size, int asc);


int main()
{
    int i, size = 0;
    scanf("%d", &size);

    int* arr = (int*)malloc(size * sizeof(int));

    srand(time(NULL));
    for (i = 0; i < size; i++) 
    {
        arr[i] = rand() % 10;
    }

    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    short_array(arr, size, 0);

    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
}


void short_array(int *arr, int size, int asc)
{
    int i, j, temp = 0;
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (asc) 
            {
                if (arr[i] > arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
            else 
            {
                if (arr[i] < arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
}