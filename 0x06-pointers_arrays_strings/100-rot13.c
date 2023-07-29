#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @str: string to be encoded
 *
 * Return: a pointer to str string
 */
char *rot13(char *str)
{
	int j;
	char main[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char rot13[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
	char *ptr = str;

	while (*str)
	{
		for (j = 0 ; j <= 52 ; j++)
		{
			if (*str == main[j])
			{
				*str = rot13[j];
				break;
			}
		}
	str++;
	}
	return (ptr);
}
