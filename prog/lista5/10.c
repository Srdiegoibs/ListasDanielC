#include <stdio.h>
#include <stdlib.h>


float factorial(float number) {
    if (number == 0) return 1;
    return number * factorial(number - 1);
}

int main()
{
    // Calculate Euler's number using a summation formula
    float euler = 0;
    for (int i = 0; i < 100; i++)
        euler += 1 / factorial(i);

    printf("Euler's number: %f\n", euler);       
    
    return 0;
}