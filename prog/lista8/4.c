//Crie um programa que receba por linha de comando um argumento, sendo este o 
//nome de um arquivo. O programa deverá então receber uma string como entrada do 
//usuário e procurar quantas vezes esta string ocorre no arquivo.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        return 1;
    }

    char *filename = argv[1];
    char search[50]; // Tamanho máximo da string de busca
    int count = 0;

    scanf("%s", search);

    FILE *file = fopen(filename, "r");
    if (!file)
    {
        perror("ERRO");
        return 1;
    }

    char line[256]; // Tamanho máximo da linha
    while (fgets(line, sizeof(line), file) != NULL)
    {
        if (strstr(line, search))
        {
            count++;
        }
    }

    fclose(file);

    printf("'%s' - %d\n", search, count);

    return 0;
}

