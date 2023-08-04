#include <stdio.h>

/**
* main - Print how much arg entered
* @argv: list
* @argc: int
* Return: 0
*/

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
