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
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
