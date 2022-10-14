// 17) Escreva um programa que receba duas entradas e imprima “1” caso um valor seja
// divisível pelo outro e “0” caso contrário. Use apenas operadores aritméticos, lógicos ou
// binários, não use IF.
#include <stdio.h>

int main () {
    int a, b;
    scanf ("%d%d", &a, &b);
    // se o resto da divisão for 0 é uma divisão inteira, caso contrario tem resto
    ((a%b) == 0) ? printf ("1") : printf ("0");
    return 0;
}
