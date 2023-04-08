//14) Crie uma função imprime_endereco(int valor) cujo único objetivo seja imprimir o
//endereço do inteiro “valor”. Então, crie uma variável inteira no main e imprima seu
//endereço, passe essa variável para imprime_endereco e observe o resultado. Explique.
#include <stdio.h>
#include <stdlib.h>

void imprime_endereco(int valor) {
    printf("%p\n", (void*)&valor);
}

int main () {
    int valor = 42;
    printf("%p\n", (void*)&valor);
    imprime_endereco(valor);
    return 0;
}