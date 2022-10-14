//Escreva um programa que receba duas entradas e imprima “1” caso um valor seja
//divisível pelo outro e “0” caso contrário. Use apenas operadores aritméticos, lógicos ou
//binários, não use IF

#include <stdio.h>

int main(void)
{
    int x, y, z;

   x=y=10;
   z=++x;
   x=-x;
   y++;
   x=-x+y-(z--);

   printf("x = %d\n y = %d\n z = %d", x,y,z);

   return 0;
}
