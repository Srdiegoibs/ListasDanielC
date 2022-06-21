#include <stdio.h>
#include <stdlib.h>

int main() {
    int number = 232;
    int digit = 0;
    int* ptr = malloc(sizeof(int));
    
    printf("malloc %ld\n", sizeof(ptr));

    int cont = 0;
    while(number != 0)
    {
        ptr[cont] = number % 10;
        number /= 10;
        //ptr = realloc(ptr, sizeof(int));
        //printf("realoc %ld\n", sizeof(ptr));
        cont++;
    }

    for(int i = 0; i <cont; i++)
        printf("%d, ", ptr[i]);

    free(ptr);
    return 0;
}
