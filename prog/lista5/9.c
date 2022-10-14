#include <stdio.h>
#include <stdlib.h>


//  Faça um programa que imprima uma árvore de Natal, considerando uma altura
// especificada pelo usuário. Para h=3:
//  I
// *I*
//**I**

int main() {
    int height = 0;
    scanf("%d", &height);

    if (height < 1) {
        printf("Erro: Altura inválida\n");
        return 1;
    }

    int space = height - 1;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < space; j++) 
            printf(" ");
        
        for (int j = 1; j < i + 1; j++) 
            printf("*");
        
        printf("I");

        for (int j = 1; j < i + 1; j++) 
            printf("*");

        printf("\n");
        space--;
    }

    return 0;
}