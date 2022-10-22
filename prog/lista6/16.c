// 16) Considerando que a função main recebe dois parâmetros “main (int args, char
// *argv[])”, faça um programa que recebe diversas palavras como entrada pela linha de
// comando e imprime qual é o maior dos parâmetros. Sugestão de entradas:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int args, char *argv[]) {

  int i, count = 0;

  for (i = 1; i < args; i++) {
      if (strlen(argv[i]) > count) {
          count = strlen(argv[i]);
      }
  }

  printf("The word %s is the largest and has %d characters", argv[i], count);

  return 0;
}