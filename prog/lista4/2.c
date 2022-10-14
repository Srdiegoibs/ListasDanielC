// 2) Suponha que um caixa automático disponha apenas de notas de 1, 10 e 50 reais.
// Considerando que alguém está fazendo um saque, implemente um programa que mostre
// o número mínimo de notas que o caixa deve entregar ao cliente. Exemplo:
// Qual o valor do saque?
// 72
// Você receberá
// 1 nota(s) de R$ 50,00
// 2 nota(s) de R$ 10,00
// 2 nota(s) de R$ 1,00
#include <stdio.h>

int main() {
    int cin, dez, um, saque;

    printf("Qual o valor do saque?\n");
    scanf("%d", &saque);

    cin = saque/50;
    saque -= cin*50;

    dez = saque/10;
    saque -= dez*10;

    um = saque/1;
    saque -= um*1; 

    printf("%d nota(s) de R$ 50.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 1.00\n", cin, dez, um);

    return 0;
}