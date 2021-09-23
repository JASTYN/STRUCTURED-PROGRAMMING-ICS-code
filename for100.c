/**
 * C program to print sum of all even numbers between 1 to n
 */

#include <stdio.h>

int main()
{
    int i, sum=0;

    

    for(i=2; i<=100; i+=2)
    {
        /* Add current even number to sum */
        sum += i;
    }

    printf("Sum of all even number between 1 to 100 is %d", sum);

    return 0;
}
