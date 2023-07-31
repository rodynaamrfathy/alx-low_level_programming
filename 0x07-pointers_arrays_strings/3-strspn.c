#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s:
 * @accept:
 *
 * Return: returns the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, k;

	for(j = 0 ; s[j] != '\0' ; j++)
	{
		for (k = 0 ; accept[k] != s[j] ; k++)
		{
			if (accept[k] == '\0')
			{
				return (j);
			}
		}
	}

	return (j);
}
