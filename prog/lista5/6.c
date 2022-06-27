#include <stdio.h>
#include <stdlib.h>

#define QTD 10

int findAverage(int *array);
int findMax(int *array);
int findMin(int *array);

int main() {
    int* ptr = (int*)malloc(QTD*sizeof(int));

    for(int i=0; i<QTD; i++) 
        scanf("%d", &ptr[i]);
    
    printf("Average: %d\n", findAverage(ptr));
    printf("Max: %d\n", findMax(ptr));
    printf("Min: %d\n", findMin(ptr));
    
    free(ptr);
    return 0;
}

int findAverage(int *array) {
    int sum = 0;
    for(int i = 0; i < QTD; i++) {
        sum += array[i];
    }
    return sum / QTD;
}

int findMax(int *array) {
    int max = array[0];
    for(int i = 0; i < QTD; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int findMin(int *array) {
    int min = array[0];
    for(int i = 0; i < QTD; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}
