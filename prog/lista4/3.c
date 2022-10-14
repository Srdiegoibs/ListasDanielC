// 3) Faça um programa que leia um valor inteiro de até 4 algarismos e calcule a soma dos
// algarismos desse número. Caso o valor informado seja maior que 4 algarismos, emita
// um erro. Exemplo:
// Informe um número:
// 3267
// Soma dos algarismos do número:
// 18
#include <stdio.h>

int main() {
    int num = 0, cont = 0, sum = 0; 
    int aux = 0;
   
    scanf("%d", &num);
    aux = num;
    
    if (num == 0) cont = 1;
    else
      while (num != 0) {
    	sum += num%10;
    	num /= 10;
    	cont++;
      }

    if (cont > 4) printf ("ERROR!\n");
    else 
        printf("number: %d\nsum %d\n", aux, sum);

    return 0;
}
