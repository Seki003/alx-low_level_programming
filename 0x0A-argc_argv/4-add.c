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
int i, n, sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		n = strtol(argv[i], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += n;
		}
	}
	printf("%d\n", sum);

	return (0);
}
}
