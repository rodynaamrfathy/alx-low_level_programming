#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory,  which contains a copy of the string given as a parameter.
 * @str: string.
 *
 * Return: 
 */
char *_strdup(char *str)
{
	int size = 0, i = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (*str)
	{
		size++;
	}

	s = malloc(size * sizeof(char) + 1);

	if (m == 0)
		return (NULL);

	while(i <= size)
	{
		*s[i] = *(str + i);
		i++;
	}

	return (s);
}
