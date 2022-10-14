#include <stdio.h>
#include <stdlib.h>


int main() {

    int idades[] = {32, 51, 14, 85, 1};
    char *nomes[] = {"Joao", "Jose", "Maria", "Eduardo", "Lisa"};

    for (int i = 0; i < sizeof(idades) / sizeof(int); i++) {
        printf("%s %d\n", nomes[i], idades[i]);
    }

    return 0;
}