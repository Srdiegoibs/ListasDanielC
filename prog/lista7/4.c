// 4) Escreva uma função que calcule o histograma de um vetor de unsigned chars, isto é,
// para uma coleção de N elementos preenchidos com valores entre 0 e 255, determine a
// quantidade de vezes que cada valor aparece na coleção. Exemplo:
// 1 7 0 6 1 3 1 6 7 1 7 1
//  0 apareceu 1 vezes
//  7 apareceu 3 vezes
//  6 apareceu 2 vezes
//  3 apareceu 1 vezes
//  1 apareceu 5 vezes
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct hist {
    int value;
    int occurrence;
} hist;

void hist_array(unsigned char* arr, int N);

int main()
{
    int size = 0;
    scanf("%d", &size);
    unsigned char* arr = (unsigned char*)malloc(size * sizeof(unsigned char));

    srand(time(NULL));
    for(int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }

    
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    hist_array(arr, size);

    free(arr);
    return 0;
}

void hist_array(unsigned char* arr, int N)
{
    hist list[255] = {0};
    int i, j, cont = 0;


    for (i = 0; i < N; i++)
    {
        for (j = 0; j < cont; j++)
        {
            if (arr[i] == list[j].value)
            {
                list[j].occurrence++;
                break;
            }
        }
        
        if (j == cont)
        {
            list[cont].value = arr[i];
            list[cont].occurrence = 1;
            cont++;
        }
    }

    for (i = 0; i < cont; i++) {
        printf("Valor %d: %d ocorrências\n", list[i].value, list[i].occurrence);
    }

}


