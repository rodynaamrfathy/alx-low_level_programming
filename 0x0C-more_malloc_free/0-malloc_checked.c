#include "main.h"
#include <stdlib.h>

/**
 * malloc_ -  a function that allocates memory using malloc.
 * @b: an unsigned int.
 *
 * Return: A pointer to the allocated memory.
 * If malloc fails, the function terminates the process with status 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit (98);
	}

	return (ptr);
}
