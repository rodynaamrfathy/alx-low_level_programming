#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * print_name - a function that prints a name.
 * @name: a string , name to be printed
 * @f: pointer to a function whose return type is void and argument is a sting
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
