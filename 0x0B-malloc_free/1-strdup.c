#include "main.h"

/**
 * *_strdup - return a pointer reallocated in space
 * @str : string
 * Return: 0 if it is null, success the pointer.
 */

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
	;

	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
			str[i] = m[i];
	}
	return (m);
}
