//10) Escreva uma função com o seguinte protótipo: void troca(int *p1, int *p2); .Utilize
//essa função no seu código para realizar a troca de dois inteiros.
#include <stdio.h>
#include <stdlib.h>
#include <threads.h>

void troca(int *p1, int *p2);

int main () {
    int a = 1, b = 2;
    
  
    

    printf("%d %d\n", a, b);
    troca(&a, &b);
    printf("%d %d\n", a, b);
    
    
    return 0;
}
  
void troca(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}