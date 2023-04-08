//12) Considere os dois vetores a seguir:
//char str[][3] = {"aa","bb","cc","dd"};
//char *str[] = {"aa","bb","cc","dd"};
//Eles são iguais? Crie uma função que receba o vetor como parâmetro e imprima as
//quatro strings. Isso consegue ser realizado com apenas um protótipo ou são necessários
//protótipos diferentes para cada sintaxe de vetor? Explique.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void f(char str[][3]) {
    for (int i = 0; i < 4; i++) {
        printf("%s\n", str[i]);
  }
}
      
void f1(char *str[]) {
    for (int i = 0; i < 4; i++) {
  printf("%s\n", str[i]);
  }
}

int main () {
    
//    char str[][3] = {"aa","bb","cc","dd"};
    char *str[] = {"aa","bb","cc","dd"};
    
    f1(str);

    return 0;
}