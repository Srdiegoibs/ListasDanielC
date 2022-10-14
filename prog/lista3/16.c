// 16) Escreva um programa que receba um valor de entrada e imprima “1” caso o valor
// seja par ou “0” para ímpar. Use apenas operadores aritméticos, lógicos ou binários, não
// use IF.
#include <stdio.h>

int main() {
    int a;
    scanf ("%d", &a);    
    // AND binário. Copia um bit para o resultado
    // caso exista em ambos operandos.
    // se o numero for  par toda vez que realizar a operação
    // AND binario com 1 o resto vai ser falso, caso seja impar a 
    // operação AND com  vai ser verdadeira
    (a & 1) ? printf ("impar 0") : printf ("par 1");
    return 0;
}
