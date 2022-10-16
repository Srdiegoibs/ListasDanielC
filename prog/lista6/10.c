#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

void replace(char *str);

int main()
{
    int size = 0, spaces = 1;
    char *str = malloc(MAX_LENGTH);
    char *dest = malloc(1);
    scanf("%[^\n]s", str);

    replace(str);

    printf("%s\n", str);

    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        if (str[i] == ' ' || i == n - 1)
        {

            if (i == n - 1)
            {
                size++;
                dest = (char *)realloc(dest, size * sizeof(char));
                dest[size - 1] = str[i];
            }

            printf("\n>%s", dest);
            size = 0;
            dest = (char *)realloc(dest, size * sizeof(char));
        }
        else
        {
            size++;
            dest = (char *)realloc(dest, size * sizeof(char));
            dest[size - 1] = str[i];
        }
    }
    printf("\n");

    free(str);
    free(dest);
    return 0;
}

void replace(char *str)
{
    char *dest = str;
    while (*str != '\0')
    {
        while (*str == ' ' && *(str + 1) == ' ')
            str++;

        *dest++ = *str++;
    }

    *dest = '\0';
}