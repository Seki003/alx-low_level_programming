#ifndef _FUNCTION_POINTERS_H
#define _FUNCTION_POINTERS_H

#include <stdlib.h>

void print_name(char *name, void (*f)(char *));

#endif