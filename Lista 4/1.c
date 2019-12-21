// 1) Implemente um programa para uma revendedora de carros que calcule o salário de
// cada vendedor. Considere que todos os carros têm o mesmo valor, e que a revendedora
// paga:
// a) um salário fixo de dois salários mínimos a seus vendedores
// b) uma comissão fixa de R$ 50,00 por carro que for vendido
// c) caso o vendedor tenha vendido mais de 10 carros, uma comissão variável de 5% do
// valor total de suas vendas.
#include <stdio.h>

#define salMin 957.97
#define carValor 25.000

int main() {
    double carVendidios;

    printf("Infome a quantidade de carros vendidos>> ");
    scanf("%lf", &carVendidios);

    if(carVendidios <= 10)
        printf("Salario>> R$ %0.2f\n", (2*salMin)+(carVendidios*50));

    else if(carVendidios > 10)
        printf("Salario>> %.3f\n", (2*salMin)+(carVendidios*carValor)*0.05);    

    return 0;
}
