#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @str: string to be encoded
 *
 * Return: a pointer to str string
 */
char *rot13(char *str)
{
	int i, j;
	char main[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char rot13[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (j = 0 ; j < 53 ; j++)
		{
			if (str[i] == main[j])
			{
				str[i] = rot13[j];
			}
		}
	}
	return (str);
}
