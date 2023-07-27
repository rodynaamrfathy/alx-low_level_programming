#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @str: string to be encoded
 *
 * Return: a pointer to str string
 */
char *rot13(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (j = 0 ;(str[i] >= 'a' && str[i] <= 'z') ||
                (str[i] >= 'A' && str[i] <= 'Z'); j++)
		{
			if ((str[i] >= 'a' && str[i] <= 'm') ||
			(str[i] >= 'A' && str[i] <= 'M'))
			{
				str[i] += 13;
			}
			else
				str[i] -= 13;
		}
	}
	return (str);
}
