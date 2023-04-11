#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 256
#define MAX_NAME_LENGTH 255

// funcao de comparacao pra ordenacao de forma decresente 
int compare(const void *a, const void *b);

int main () {
    // Definicao da matriz de entrada
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
  while(fscanf(fp, "%s %d", entries[num_entries][0], &values[num_entries]) == 2) {
      strcpy(entries[num_entries][1], entries[num_entries][0]);
      num_entries++;
  }

  // Fecha o arq de etrada 

  // Ordena os registros de acordo com os valores numéricos, em ordem decrescente
  qsort(values, num_entries, sizeof(int), compare);

  for (int i = 0; i < num_entries; i++) {
      printf("(%s,  %d)\n", entries[i][1], values[i]);
  }

  fclose(fp);

  return 0;
}

int compare(const void *a, const void *b) {
  return (*(int*)a - *(int*)b);
}

