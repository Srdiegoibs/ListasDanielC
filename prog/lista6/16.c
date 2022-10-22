// 16) Considerando que a função main recebe dois parâmetros “main (int args, char
// *argv[])”, faça um programa que recebe diversas palavras como entrada pela linha de
// comando e imprime qual é o maior dos parâmetros. Sugestão de entradas:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int args, char *argv[]) {

  int i, count = 0;
  char **word;

  word = (char **)malloc(args * sizeof(char *));

  for (i = 0; i < args; i++) {
    word[i] = (char *)malloc(strlen(argv[i]) * sizeof(char));
    strcpy(word[i], argv[i]);
  }

  for (i = 0; i < args; i++) {
    if (strlen(word[i]) > strlen(word[count])) {
      count = i;
    }
  }
  printf("The biggest word is: %s");

  for (i = 0; i < args; i++) 
    free(word[i]);

  free(word);
  return 0;
}