#include <stdio.h>

// int ehPrimo(int number, int n)

// função que calcula numeros primos utilizando o resto da divisão
// de 1 até o numero passado
int isPrimeOne(int number);

// função calcula o numero primo utilizando o resto da divisão 
// começando do 2 até o number/2
int isPrimeTwo(int number);

// função recursiva para calcular o numero primo
int isPrimeThree(int number, int n);

int main() 
{
    int number = 0;
    scanf("%d", &number);

    if (number < 0) return 0;

    if (isPrimeThree(number, number/2)) printf("%d 'e primo\n", number);
    else printf("%d n primo\n", number);

    return 0;
}

int isPrimeThree(int number, int n)
{
    // Caso o numero seja 0 ou 1 não é primo retorna 0
    if (number == 0 || number == 1) return 0;

    // Caso base da recursao
    if (n == 1) return 1;
    
    // Caso o resto da divisao seja igual a 0 o numero nao 'e primo
    if (number % n == 0) return 0;

    // Recursao com n-1 até alcançar o caso base que 'e o 
    else isPrimeThree(number, n-1);
}

int isPrimeTwo(int number)
{
    // Quantidade de divisões e flag para verificar se o numero 'e primo
    int divs = 0, flag = 0;

    // Verifica se o numero tem divisores entre 2 e a matade do numero
    // Caso tenha altera a flag para 1 o numero nao 'e primo
    for (int i = 2; i <= number/2; i++)
        if (number % i == 0)
        {
            flag = 1;
            break;
        }

    // Caso a flag seja igual a 0 retorna 1, o numero 'e primo
    if (flag == 0) return 1;

    // Caso contrario retorna 0, o numero nao 'e primo, flag = 1
    return 0;
}

int isPrimeOne(int number) 
{
    // Quantidade de divisões
    int divs = 0;

    // Verifica se o numero tem divisores menores que ele
    // Caso tenha incrementa a variavel divs
    for (int i = 1; i <= number; i++)
        if (number % i == 0)
            divs++;
            // printf("i =%d\n", i);   

    // Caso a quantidade de divisores seja igual a 2 retorna 1
    if (divs == 2) return 1;

    // Caso contrario retorna 0
    return 0;
}

// int ehPrimo(int number, int n)
// {
//     // Quantidade de divisões 
//     static int divs = 0;

//     // Caso o numero seja menor que zero retorna -1 
//     if (number < 0) return -1;
    
//     // Caso seja 1 retornar 1
//     if (number == n) return n;
    
//     printf("divs antes %d\n", divs);
//     // Caso contrario verificar se o resto da divisao eh igal a 1 
//     // e atribuir 1 na variavel static divs 
//     if (number % n == 0) divs++;

//     printf("divs depois%d\n", divs);

//     // Recursao com n+1 até alcançar o caso base que 
//     // eh quatidade de divs ser mair que 2
//     ehPrimo(number, n+1);

//     if (divs <= 2) return 1;

//     return 0;
// }