// 1) Escreva uma função que receba uma string, um parâmetro do tipo “const char *”, e
// retorne a quantidade de caracteres. Chame a função de minha_strlen.
#include <stdio.h>
#include <stdlib.h>

int strlen_t(char * str);

int main() {
    char *str = "Ola mundo!";
    printf("%d\n", strlen_t(str));
    return 0;
}

int strlen_t(char * str) {
    int cont = 0;
    while (*str != 0) {str++, cont++;}
    return cont;
}