#include <stdio.h>

int main() {
    char c;
    char inicialChar;
    char finalChar;
    scanf("%c", &inicialChar);
    while((c = getchar()) != '\n' && c != EOF);
    scanf("%c", &finalChar);

    for (char i = inicialChar; i <= finalChar; i++) {
        printf("%c ", i);
    }

    return 0;
}