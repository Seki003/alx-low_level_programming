#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - printing the sum entered
 * @n: numbers entered
 * @...: other aurguments
 * Return: 0 if n equal 0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;

	va_start(arg, n);

	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(arg, int);

	va_end(arg);

	return (sum);
}
