#include "variadic_functions.h"

/**
 * print_strings - printing a string followed by new line
 * @separator: character to separate
 * @n: number of type int
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	va_start(ap, n)
	if (separator == NULL)
		separator = "";

	for (n = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
