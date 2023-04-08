//11) Escreva um programa que demonstre o fato de que vetores (arrays) não são
//passados para funções mas sim o ponteiro para o primeiro elemento do vetor. Dica: o
//operador sizeof será útil
#include <stdio.h>
#include <stdlib.h>

void f (int array[]){
    printf("size of array %d\n", sizeof(array));
  for (int i; i < 4; i++)
    printf("%d ", array[i]);
}

int main() {   
    int array[] = {1, 2, 3, 4};
    printf("size of array %d\n", sizeof(array));
    f(array);

    return 0;
}