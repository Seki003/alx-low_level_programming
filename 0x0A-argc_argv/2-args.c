#include <stdio.h>

/**
* main - Print each word speretly of the arguments
* @argv: list
* @argc: int
* Return: 0
*/

int main(int argc, char **argv)
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
