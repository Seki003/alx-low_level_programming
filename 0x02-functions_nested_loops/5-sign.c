#include "main.h"

/**
 * print_sign - check if the number is positive or negative or equal 0
 * @n: the integer to be checked
 * Return: 1 if n is positive, return 0 if equal 0 and -1 if n negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
	}
	return (-1);
}
