// 4) Escreva um programa que receba três valores ponto flutuante de precisão dupla (a, b,
// c) e responda se a soma “a+b” é igual a “c”. Teste com a = 0,1 , b = 0,2 e c = 0,3.
#include <stdio.h>

int main() {
    double a = 0, b = 0, c = 0;
    double res;

    scanf("%lf, %lf, %lf", &a, &b, &c);
   
    printf ("a = %lf\nb = %lf\nc = %lf\n", a, b, c);

    res = a+b;
    if (res == c)  printf ("equals");

    return 0;
}
