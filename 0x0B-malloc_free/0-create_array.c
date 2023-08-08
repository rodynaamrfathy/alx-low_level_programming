#include "main.h"
#include <stdlib.h>

/**
 * create_array -  a function that creates an array of chars,
 * and initializes it with a specific char. 
 * @size: array size
 * @c: char.
 *
 * Return:a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *s = malloc(sizeof(char) * size);

	if (size == 0 || s == 0)
	{
		return (0);
	}
	
	while (size--)
	{
		s[size] = c;
	}

	return (s);
}
