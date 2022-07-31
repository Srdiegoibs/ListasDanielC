#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main () {
    char str[] = "Hello World";

    for (int i = 1; i < sizeof(str); i++) 
            printf("%d\n", i);
    

    return 0;
}