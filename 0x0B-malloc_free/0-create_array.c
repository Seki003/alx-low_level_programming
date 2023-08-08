#include "main.h"

/**
 * creat an array - prints an array
 * @c: the address of memory to print
 * @size: the size of the memory to print
 * Return: the aray or null
 */

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
	{
		return (0);
	}
	while (size--)
		n[size] = c;
		
	return (n);
}
