// 3) Faça um programa que leia um valor inteiro de até 4 algarismos e calcule a soma dos
// algarismos desse número. Caso o valor informado seja maior que 4 algarismos, emita
// um erro. Exemplo:
// Informe um número:
// 3267
// Soma dos algarismos do número:
// 18
#include <stdio.h>

int main() {
    int num, rest = 0, rest1 = 0, rest2 = 0, rest3 = 0;
    int div = 0, div1 = 0, div2 = 0;

    scanf("%d", &num);

    if(num == 0) {
        // rest recebe o resto da divisão do numero 
        // por 10, div recebe a divisão inteira do numero por 10
        rest = num%10;
        div = num/10;
        rest1 = div%10;
        div1 = div/10;
        rest2 = div1%10; 
        rest3 = div1/10;

        int solucao = rest+rest1+rest2+rest3;
        printf("%d\n", solucao);
    }

    printf("ERRO!\n");

    return 0;
}