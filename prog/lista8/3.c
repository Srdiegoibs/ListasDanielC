//3) Modifique o programa anterior para incluir um registro. Remova as entradas
//excedentes caso o limite de 256 entradas seja extrapolado. Como critério de escolha,
//remova os registros cujos valores numéricos sejam os maiores.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES  256

typedef struct {
    char *name;
    int number;
} Registry;

void addResister(Registry list[], int *count, char *name, int number);
char *duplicateString(const char *str);

int main()
{
    Registry registry[MAX_ENTRIES];
    int count = 0;

    // Abrir arquivo para leitura e escrita
    FILE *file = fopen("data.txt", "r+");
    if (!file)
    {
        perror("ERRO!");
        return 1;
    }

   // Ler arquivo
   char name[50];
   int number;
   while (fscanf(file, "%s %d", name, &number) == 2)
   {
        addResister(registry, &count, name, number);
   }

   // retorne para o inicio do arquivo 
   rewind(file);

   // Escreva os registros no arquivo
   for (int i = 0; i < count; i++) 
   {
    fprintf(file, "%s %d\n", registry[i].name, registry[i].number);
    free(registry[i].name);
   }

   while(1) 
   {
       scanf("%s %d", name, &number);
       addResister(registry, &count, name, number);

       fprintf(file, "%s %d\n", name, number);

       if (strcmp(name, "q") == 0) break; 
   }

    fclose(file);

    return 0;
}

void addResister(Registry list[], int *count, char *name, int number)
{
    if (*count < MAX_ENTRIES)
    {
        // caso seja possivel adicionar elemetos, alocar memoria para o nome
        list[*count].name = duplicateString(name);
        list[*count].number = number;
        (*count)++;
    }
    else 
    {
        int highest_index = 0; 
        for (int i = 1; i < MAX_ENTRIES; i++)
        {
            if (list[i].number > list[highest_index].number)
            {
                highest_index = i;
            }
        };

        free(list[highest_index].name);
        list[highest_index].name = duplicateString(name);
        list[highest_index].number = number;
    }
}

char *duplicateString(const char *str)
{
    if (str == NULL)
    {
        return NULL;
    }

    char *duplicate = (char *)malloc(strlen(str) + 1); // + 1 para o caracter nulo
    if (duplicate)
    {
        strcpy(duplicate, str);
    }

    return duplicate;
}
