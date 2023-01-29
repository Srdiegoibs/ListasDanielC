// 5) Faça uma função que receba três parâmetros, o primeiro uma string (const char *str),
// o segundo uma letra (const char busca) e o terceiro outra letra (const char troca). A
// função deverá realizar a troca de todas as ocorrências de “busca” por “troca” em “str” e
// retornar a quantidade de caracteres trocados.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *swap_char(const char *str, const char troca, const char busca);

int main()
{
  char busca = 'a';
  char troca = 'o';
  char *str = (char *)malloc(20 * sizeof(char));

  strcpy(str, "ola mundo");

  char *new_str = swap_char(str, busca, troca);
  printf("Nova string: %s\n", new_str);

  free(new_str);
  free(str);
  return 0;
}

char *swap_char(const char *str, const char troca, const char busca)
{
  int count = 0;
  int len = strlen(str);
  char *new_str = (char *)malloc((len + 1) * sizeof(char));
  
  for (int i = 0; i < len; i++)
  {
    new_str[i] = (str[i] == busca) ? troca : str[i];
    if (str[i] == busca)
    {
      count++;
    }
  }
  new_str[len] = '\0';
  printf("Numero de caracteres trocados: %d\n", count);
  return new_str;
}