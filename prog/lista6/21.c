#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str = malloc(100 * sizeof(char));
    char *auxStr = str;
    char flag = 0;
    scanf("%[^\n]s", str);

    while (*auxStr != 0)
    {
        if (*auxStr != ' ')
        {
            if (!flag)
            {
                if (*auxStr > 'a' && *auxStr < 'z')
                {
                }
            }
            flag = 1;
        }
        else {
            flag = 0;
        }
        auxStr++;
    }

    free(str);
    return 0;
}