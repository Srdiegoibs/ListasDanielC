#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 100


int main()
{
    int cont = 0, i = 0, j = 0;
    char *str = malloc(MAX_LENGTH);
    scanf("%[^\n]s", str);
    char *subStr =  malloc(MAX_LENGTH);
    scanf("%s", subStr);

    // printf("%s\n", str);
    // printf("%s\n", subStr);

    while (*str != '\0') {
        while (subStr[0] == str[])
        if (*str == 32 && *str != '\0') {
            // printf ("> %c\n", *str);
            printf ("> %d\n", cont);
            cont++;
        }
        i++;
        str++;
    }

    return 0;
}