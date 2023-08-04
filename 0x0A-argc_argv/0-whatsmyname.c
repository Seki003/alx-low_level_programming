#include <stdio.h>

/**
* main - Print the program name
* @argv: list
* @argc: int
* Return: 0
*/

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
