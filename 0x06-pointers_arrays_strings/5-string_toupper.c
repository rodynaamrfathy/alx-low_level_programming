#include "main.h"

/**
 * string_toupper - Write a function that changes all
 * lowercase letters of a string to uppercase.
 * @s: lovwer case string
 *
 * Return: a pointer to array s
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] > 96 && s[i] < 123)
			s[i] = s[i] - 32;
		else
			continue;
	}

	return (s);
}
