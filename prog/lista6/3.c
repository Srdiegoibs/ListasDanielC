#include <stdio.h>

int main() {
    {
        int a[100];
        printf("%X\n", &a);
    }
    {
        char b[100*sizeof(int)];
        printf("%X\n", &b);
    }
    return 0;
}