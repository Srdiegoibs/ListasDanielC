//7) Crie uma função que receba uma string e transforme caracteres de caixa baixa em
//caixa alta e vice-versa.
#include <stdio.h>
#include <stdlib.h>


void changeSize(char *s)
{
    while(*s)
    {
        if(*s >= 65 && *s <= 90)
        {
            *s += 32;
        }
        else if(*s >= 97 && *s <= 122)
        {
            *s -= 32;
        }
        s++;
    }

}


int main()
{
    char s[] = "HeLlo WoRlD";
    printf("%s\n", s);
    changeSize(s);
    printf("%s\n", s);
    return 0;
}