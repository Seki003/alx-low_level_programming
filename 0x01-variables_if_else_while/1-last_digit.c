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
    int n, a;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    a = n % 10;
    if (a > 5)
    {
        printf("Last digit of %d is %d and is greater than 5\n", n, a);
    }
    else if (a < 6 && a != 0)
    {
        printf("Last digit of %d is %d and is 0\n", n, a);
    }
    else
    {
        printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
    }
    return (0);
}
