//Similar ao anterior, dessa vez escreva uma função que receba uma quantidade
//variável de números inteir
#include <stdio.h>
#include <stdlib.h>

double average(int count, char *args[]) {
    int total = 0;
  
    for (int i = 0; i < count; i++)
        total += atoi(args[i]);
      
    return (double) total / count;
}

int main (int argc, char *argv[]) {
    double result = average(argc - 1, argv + 1);
  
    printf("Media %.2f\n", result);

    return 0;
}