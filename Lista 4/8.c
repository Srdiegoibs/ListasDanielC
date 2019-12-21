// 8) Faça um programa que receba os três coeficientes de uma equação de segundo grau
// (a, b, c) e determine as raízes. Considere o caso em que o delta de Bhaskara é negativo.
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    scanf ("%f %f %f", &a, &b, &c);

    float delta = ((b*b) - (4 * a * c));
    
    float raiz = ((-b + (sqrt(delta)))/2);
    float raiz1 = ((-b - (sqrt(delta)))/2);

    printf ("raiz1: %f\nraiz2: %f", raiz, raiz1);

    return 0;
}