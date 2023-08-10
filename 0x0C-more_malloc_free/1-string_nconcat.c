#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string.
 * @s2: 2nd stirng.
 * @n: no. of bytes to be added from the 2nd string.
 *
 * Return: null if failed, pointer to  concatenated strings.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len;
	char *ptr;

	len = strlen(s1) + n + 1;
	ptr = malloc(sizeof(char) * len);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; s1[i] != '\0' ; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0 ; j < n ; j++)
	{
		ptr[i + j] = s2[j];
	}

	return (ptr);
}
