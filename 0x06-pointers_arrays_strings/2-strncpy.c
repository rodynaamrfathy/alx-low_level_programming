#include "main.h"

/**
 * _strncpy - copies a string to another.
 * @dest: first string.
 * @src: it would be copied to.
 * @n: bytes number of characters to copy.
 *
 * Return: returns dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	dest[j] = '\0';

	return (dest);
}
