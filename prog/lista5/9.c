#include <stdio.h>
#include <stdlib.h>


//  Faça um programa que imprima uma árvore de Natal, considerando uma altura
// especificada pelo usuário. Para h=3:
//  I
// *I*
//**I**

int main() {
    int h = 0;
    scanf("%d", &h);

    if (h < 1) {
        printf("Erro: Altura inválida\n");
        return 1;
    }

    

    for (int i = 0; i < h; i++) {
        if (i == 0) {
            printf("I");
        } else {
            for (int j = 0; j < h - i; j++) {
                printf("*");
            }
        }
        printf("\n");
    }


    return 0;
}