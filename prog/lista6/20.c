// 20) Crie um programa que leia palavras, de até 20 letras, até que o usuário digite um
// ponto final ou até 20 palavras. Então o programa deverá imprimir as palavras na ordem
// inversa. Exemplo:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIMIT 200

int main()
{

    char *str = malloc(LIMIT * sizeof(char));
    char *list = malloc(LIMIT * sizeof(char));
    int count = 0;

    do
    {
        scanf("%s", str);
    
        for (int i = 0; i < strlen(str); i++)
        {
            list[count] = str[i];
            count++;
        }

        list[count] = ' ';
        count++;
        
    } while (strcmp(str, ".") != 0 && strlen(str) < 20);

    for (int i = count - 1; i >= 0; i--)
    {
        if (list[i] != ' ')
        {
            if (i == 0)
            {
                for (int j = i; j < count; j++)
                {
                    printf("%c", list[j]);
                }
                printf(" ");
            }
        }
        else
        {
            for (int j = i + 1; j < count; j++)
            {
                printf("%c", list[j]);
            }
            printf(" ");
            count = i;
        }
    }


    free(str);
    free(list);
    return 0;
}
