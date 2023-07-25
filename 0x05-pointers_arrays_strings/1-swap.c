#include "main.h"

/**
 * swap_int -  a function that swaps the values of two integers
 * @a:is a pointer to an integer 
 * @b:is a pointer to an integer
 *
 * Return: doesn't return any thing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
