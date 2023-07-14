#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: Generates a random number and prints the last digit of it,
 *              along with whether it's greater than 5 or smaller.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    if (n % 10 > 5)
    {
        printf("Last digit of %d is %u and is greater than 5\n", n, n % 10);
    }
    else if (n % 10 == 0)
    {
        printf("Last digit of %d is %u and is 0\n", n, n % 10);
    }
    else
    {
        printf("Last digit of %d is %u and is less than 6 and not 0\n", n, n % 10);
    }
    return (0);
}