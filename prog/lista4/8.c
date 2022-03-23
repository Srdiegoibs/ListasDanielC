// 8) Faça um programa que receba os três coeficientes de uma equação de segundo grau
// (a, b, c) e determine as raízes. Considere o caso em que o delta de Bhaskara é negativo.
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, sqrtdelta, root1, root2;
    scanf ("%f %f %f", &a, &b, &c);


    if (a != 0) {
        delta = ((b*b) - (4 * a * c));
        sqrtdelta = sqrt(delta);

        if (delta >= 0) {
            root1 = (-b + sqrtdelta)/(2*a);
            root2 = (-b - sqrtdelta)/(2*a);
            printf ("Root 1: %.2f\nRoot 2 %.2f\n", root1, root2);
        }
        else {
            delta = -delta;
            sqrtdelta = sqrt(delta);
            printf ("Root 1: %.2f + i.%2f\n", (-b)/(2*a), (sqrtdelta)/(2*a));
            printf ("Root 2: %.2f - i.%2f\n", (-b)/(2*a), (sqrtdelta)/(2*a));
        }
    }
    else
        printf ("ERROR!");

    return 0;
}