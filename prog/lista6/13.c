#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main()
{
    int *array = malloc(SIZE);
    int temp = 0, i = 0;

    srand(time(NULL));
    for (; i < SIZE; i++)
    {
        array[i] = rand() % SIZE + 1;
    }

    for (i = 0; i < SIZE; i++)
    {
        if (array[i] < array[i + 1])
        {
            temp = array[i];
            array[i] = array[i+1];
            array[i+1] = temp;
        }

        
    }

    
    // for(i = 0; i < SIZE; i++)
    //     printf("%d, ", array[i]);

    free(array);
    return 0;
}