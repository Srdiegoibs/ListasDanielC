#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LENGTH 100


int len (char *str);
int cmp (const char *s1, const char *s2);

int main()
{
    int cont = 1, size = 0, found = 0;
    char *str = malloc(MAX_LENGTH);
    char *subStr =  malloc(MAX_LENGTH);
    char *aux = malloc(0);

    scanf("%[^\n]s", str);
    scanf("%s", subStr);
    
    int n = len(str);
    for (int i = 0; i < n; i++) {
        if (str[i] == ' ' || i == n-1) {
            if (i == n-1) {
                size++;
                aux = (char *) realloc( aux, size*sizeof(char) );
                aux[size-1] = str[i];        
            }

            if (cmp(aux, subStr) == 0) {
                found = 1;
                break;
            }

            size = 0;
            cont++;
            aux = (char *) realloc( aux, 0*sizeof(char) );
        }
        else {
            size++;
            aux = (char *) realloc( aux, size*sizeof(char) );
            aux[size-1] = str[i];
        }
    }

    if (!found) {
        printf("não encontrado!\n");
    }
    else printf ("%d\n", cont);

    free(aux);
    free(str);
    free(subStr);
    return 0;
}

int len (char *str) {
    int n = 0;
    while(*str != '\0') str++, n++;
    return n;
}

int cmp (const char *s1, const char *s2) {
    const unsigned char *us1 = (const unsigned char *) s1;
    const unsigned char *us2 = (const unsigned char *) s2;

    while (*us1 == *us2 && *us1 != '\0') us1++, us2++;

    return (*us1 > *us2) - (*us1 < *us2);
}
