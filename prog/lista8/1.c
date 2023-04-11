// 1) Escreva um programa que leia um arquivo contendo sequências de tuplas (nome,
// número), separadas por linhas. Considere um máximo de 256 entradas, cada nome com
// um máximo de 255 caracteresis
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 256
#define MAX_NAME_LENGTH 255

int main() {
    char entries[MAX_ENTRIES][2][MAX_NAME_LENGTH];
    int values[MAX_ENTRIES];
    int num_entries = 0;

    // Abre o arq de entrada para leitura
    FILE *fp;
    fp = fopen("file.txt", "r");
    if (!fp) {
        printf("ERRO\n");
        return 1;
    }

    // Le os dados do arq de entrada para a matriz
    while (fscanf(fp, "%s %d", entries[num_entries][0], &values[num_entries]) == 2) {
        strcpy(entries[num_entries][1], entries[num_entries][0]);
        num_entries++;
    }


    for (int i = 0; i < num_entries; i++)
    {
        printf("(%s,  %d)\n", entries[i][1], values[i]);
    }

    fclose(fp);

    return 0;

    return 0;
}
