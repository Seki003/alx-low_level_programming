#include <stdio.h>
/**
* main -101 101-quote.c
* with proper grammar, but the outcome is a piece of art,
* Return: 0
*/
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	fwrite(str, sizeof(char), strlen(str), stderr);
	return (1);
}
