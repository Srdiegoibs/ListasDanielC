// 6) Similar a anterior, modifique a função para que “busca” e “troca” sejam strings
// (const char*) cujos tamanhos devem ser os mesmos
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lenStr(const char *str);
char *swap_str(const char *str, const char *busca, const char *troca);

int main()
{
    char str[] = "ola mundo";
    char *newStr = swap_str(str, "ola", "tchau");

    printf("%s", newStr);

    free(newStr);
    return 0;
}


int lenStr(const char *str)
{
    int cont = 0;
    while (*str)
    {
        cont++;
        str++;
    }
    return cont;
}

char *swap_str(const char *str, const char *busca, const char *troca)
{
    int cont = 0, sizeStr = 0;
    const char *s = str;

    int sizeBusca = lenStr(busca);
    int sizeTroca = lenStr(troca);

    while (*s)
    {
        const char *b = busca;
        const char *r = s;

        while ((*b && *r) && (*b == *r))
        {
            b++;
            r++;
        }

        if (!*b)
        {
            cont++;
            s = r;
        }
        else
        {
            s++;
        }

        sizeStr++;
    }

    int newLen = sizeStr - (cont * sizeBusca) + (cont + sizeTroca);
    char *newStr =  (char *)malloc(newLen + 1);

    if (!newStr)
    {
        return NULL;
    }

    char *ns = newStr;
    s = str;

    while(*s)
    {
        const char *b = busca;
        const char *r = s;

        while ((*b && *r) && (*b == *r))
        {
            b++;
            r++;
        }

        if (!*b)
        {
            const char *t = troca;
            while (*t)
            {
                *ns++ = *t++;
            }
            s = r;
        }

        else
        {
            *ns++ = *s++;
        }
    }

    *ns = '\0';
    return newStr;
}