// 17) Descreva o que acontece em todas as linhas do seguinte programa e qual é a saída:
#include <stdio.h>

int main()
{   
    /* instancia e inicia uma matriz 5X5 */
    char a[5][5] = {0};

    /* imprime o tamanho da matriz 25, da linha 5 e o tamanho da primeita celula 1 */
    // printf("%d %d %d\n", sizeof(a), sizeof(a[0]), sizeof(a[0][0]));
    /* printa o endereço da matriz e do primeira linha e o peimeiro lemento da matriz */
    // printf("%X %X %d\n", a, a[0], a[0][0]);
    /* mesma coisa para a segunda linha */
    // printf("%X %X %d\n", a, a[1], a[1][0]);
    printf("%X %X %X %X %X\n", a[0], a[1], a[2], a[3], a[4]);
    return 0;
}