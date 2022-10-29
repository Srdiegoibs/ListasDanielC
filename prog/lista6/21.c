// 21) Escreva um programa que receba uma frase e troque a primeira letra de cada palavra
// por uma letra maiúscula, todas as demais letras devem ser minúsculas, mesmo que o
// usuário entre com maiúsculas.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str = malloc(100 * sizeof(char));
    char *auxStr = str;
    char flag = 0;
    int i = 0;
    scanf("%[^\n]s", str);

    while (*auxStr != 0)
    {

        if (*auxStr != ' ')
        {
            if (!flag)
            {
                if (*auxStr >= 97 && *auxStr <= 122)
                {
                    *auxStr -= 32;
                    str[i] = *auxStr;
                }
            }
            else if (*auxStr >= 65 && *auxStr <= 90)
            {
                *auxStr += 32;
                str[i] = *auxStr;
            }
            flag = 1;
        }

        else
            flag = 0;

        auxStr++;
        i++;
    }

    printf("\n%s", str);

    free(str);
    // free(auxStr);
    return 0;
}