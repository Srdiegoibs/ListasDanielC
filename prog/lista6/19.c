#include <stdio.h>

int main()
{
    char **s;
    char foo[] = "Ola mundo!";
    s = foo;
    printf("A string: %s\n", s);
    s[0] = foo;
    printf("O caractere s[0]: %s\n", &*s[0]);
    return 0;
}
