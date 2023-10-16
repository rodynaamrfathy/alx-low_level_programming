#include "main.h"

/**
 * _strcat -  appends char array of para1 to para2.
 * @dest: first string.
 * @src: secoud string to be moved to the first one.
 *
 * Return: returns a pointer of type char pointing at the new array of chars
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
