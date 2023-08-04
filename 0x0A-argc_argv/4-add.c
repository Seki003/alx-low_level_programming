#include <stdio.h>
#include <stdlib.h>

/**
* main - multiply two number if there more than 2 arg fail
* @argv: list
* @argc: int
* Return: 0 sucess non zero no sucess
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (argc--)
	{
		for (argv[argc]; *c; c++)
		{
			if (*c < '0' || *c > '9')
				printf("Error\n", 1);
			sum += atoi(argv[argc]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
