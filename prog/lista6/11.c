// 11) Faça um programa que receba uma palavra e determine se ela é um palíndromo ou
// não.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int main()
{
    char *str = malloc(MAX);
    scanf("%[^\n]s", str);

    // printf("%c ", str);
    int i = 0, flag = 0;
    int len = strlen(str) - 1;

    while (len > i)
        if (str[i++] != str[len--])
            flag = 1;

    printf(">\"%s\" is a palindrome\n", str) ? (!flag) : printf(">\"%s\" not a palindrome\n", str);

    // if (!flag)
    //     printf(">\"%s\" is a palindrome\n", str);
    // else
    //     printf(">\"%s\" not a palindrome\n", str);

    free(str);
    return 0;
}