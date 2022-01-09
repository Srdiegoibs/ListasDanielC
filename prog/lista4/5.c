// 5) Crie um programa que receba o tamanho de três lados de um triângulo e determine se
// as entradas representam um triângulo equilátero, escaleno ou isósceles.
#include <stdio.h>

int main() {
    float lado1, lado2, lado3;

    printf("Digite o tamanho dos três lados do triângulo: ");
    scanf("%f %f %f", &lado1, &lado2, &lado3);

    if (lado1 == lado2 && lado2 == lado3) {
        printf("Triângulo equilátero.\n");
    } else if (lado1 != lado2 && lado2 != lado3 && lado1 != lado3) {
        printf("Triângulo escaleno.\n");
    } else {
        printf("Triângulo isósceles.\n");
    }

    return 0;
}