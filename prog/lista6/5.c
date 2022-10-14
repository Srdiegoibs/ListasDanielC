#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int myStrcmp(char *s1, char *s2)
{
    int status = 0;
    while ((*s1 != '\0'  && *s2 != '\0') && (*s1 == *s2))
    {
        s1++;
        s2++;
    }

    status = (*s1 == *s2) ? 0 : (*s1 > *s2) ? 1 : -1;
    return status;
}


int main() {
    char str1[] = "World";
    char str2[] = "Hello world";

    printf("%d\n", myStrcmp(str1, str2));

    return 0;
}