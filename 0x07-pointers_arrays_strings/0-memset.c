#include "main.h"

/**
 * _memset -  a function that fills memory with a constant byte.
 * @s: type pointer to a char.
 * @b: type char.
 * @n: unsigned int, the memory area pointed to by s.
 *
 * Return: returns a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}

	return (s);
}
