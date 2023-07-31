#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: The pointer to the target string in which the search is performed.
 * @accept: The pointer to the set of characters to search for 
 * in the target string.
 *
 * Return:  a pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0 ; accept[i] != 0 ; i++)
	{
		for (j = 0 ; s[j] != 0 ; j++)
		{
			if (s[j] == accept[i])
			{
				return (s[j]);
			}
		}

	}

	return (NULL);
}
