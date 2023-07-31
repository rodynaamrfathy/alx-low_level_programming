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
	unsigned int i = 0, j;

	for(j = 0 ; j < i ; j++)
	{
		if (s[j] == accept[j])
		{
			i++;
		}
	}

	return (i);
}
