#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: string one.
 * @s2: string two.
 *
 * Return: On success returns a pointer to the concatenates strings.
 * It returns NULL if insufficient memory was available.
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, ts = 0, i = 0, j = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
		size1++;

	while (s2[size2] != '\0')
		size2++;

	ts = size1 + size2;
	s = malloc((ts + 1) * sizeof(char));

	if (s == 0)
		return (NULL);

	while (i < size1)
	{
		s[i] = *(s1 + i);
		i++;
	}

	while (j < size2)
	{
		s[size1 + j] = *(s2 + j);
		j++;
	}

	s[ts] = '\0';

	return (s);
}
