#include "function_pointers.h"
/**
 * print_name - functio that print a name
 * @name: the string name
 * @f: the printing name function
 * 
 * Return: Void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
