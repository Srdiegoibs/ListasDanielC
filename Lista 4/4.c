// 4) Escreva um programa que receba três valores ponto flutuante de precisão dupla (a, b,
// c) e responda se a soma “a+b” é igual a “c”. Teste com a = 0,1 , b = 0,2 e c = 0,3.
#include <stdio.h>

int main() {
    double a = 0, b = 0, c = 0;
    double res;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    res = a+b;
    if(res == c)
        printf("Iguais");

    return 0;
}