#include "main.h"

/**
 * _strncat -  concatenates two strings.
 * @dest: first string.
 * @src: to be copied.
 * @n: maximum number of bytes.
 *
 * Return: returns a pointer of type char pointing at dest after modification.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j < n && *(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	return (dest);
}
