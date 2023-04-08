//13) De acordo com o padrão C vetor[0] é abreviação sintática para *(vetor + 0). Escreva
//uma função que utiliza as duas formas para imprimir todos os valores de um vetor de
//inteiros, o vetor deve ser passado para a função como parâmetro
#include <stdlib.h>
#include <stdio.h>

void printArray(int arr[]) {
      for (int i = 0; i < 4; i++) 
           printf("%d ", arr[i]);
        
    printf("\n");
    for (int i = 0; i < 4; i++) 
        printf("%d ", *(arr + i));
  
 }

int main() {
    int arr[] = {1, 2, 3, 4};
    printArray(arr);

    return 0;
}

//Os dois vetores são diferentes. O primeiro vetor, char str[][3],
//é uma matriz de caracteres onde cada linha possui espaço para armazenar
//até 3 caracteres (incluindo o caractere nulo '\0' ao final de cada string).
//Já o segundo vetor, char *str[], é um vetor de ponteiros para caracteres,
//onde cada ponteiro aponta para o início de uma string.