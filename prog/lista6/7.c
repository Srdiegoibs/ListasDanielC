#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 1000

int main() {
    char *str = malloc(MAX_LENGTH);
    fgets(str, MAX_LENGTH, stdin);
    int contSpacas = 1;

    while (*str != '\n') {
        if (*str == ' ') { 
            contSpacas++; 
        }
        // printf("%c", *str);
        str++;
    }
    printf("\n%d", contSpacas);

  
    
    // free(str);
    return 0;
}