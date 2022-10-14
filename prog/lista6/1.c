#include <stdio.h>
#include <stdlib.h>

// 1) Escreva um programa que declare e inicializa, para qualquer valor, um inteiro, um
// ponto flutuante e um caractere. Imprima o conteúdo, endereço e tamanho das três
// variáveis.

int main() {
    int i = 1;
    float f = 1.0;
    char c = 'a';
    printf("conteudo\ni = %d\nf = %f\nc = %c\n", i, f, c);
    printf("\nendereco\ni = %p\nf = %p\nc = %p\n", &i, &f, &c);
    printf("\ntamanho\ni = %lu\nf = %lu\nc = %lu\n", sizeof(i), sizeof(f), sizeof(c));
    
    return 0;
}