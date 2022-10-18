#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int main()
{
  int array[] = {32, 45, 67, 1, 67, 9, 4, 87, 100, 10};
  int n = 1;

  int min = array[0];
  int max = array[0];

  int len = sizeof(array) / sizeof(array[0]);
  for (int i = 0; i < len; i++)
  {
    if (array[i] < min)
    {
      min = array[i];
    }
    if (array[i] > max)
    {
      max = array[i];
    }
  }

  printf("The minimum value is: %d\n", min);
  printf("The maximum value is: %d\n", max);

  return 0;
}