#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @l: string to be encoded.
 *
 * Return: returns a pointer pointing at the array.
 */
char *leet(char *l)
{
	int i;

	for (i = 0 ; l[i] != '\0' ; i++)
	{
		if (l[i] == 'a' || l[i] == 'A')
			l[i] = 52;
		if (l[i] == 'e' || l[i] == 'E')
			l[i] = 51;
		if (l[i] == 'o' || l[i] == 'O')
			l[i] = 48;
		if (l[i] == 't' || l[i] == 'T')
			l[i] = 49;
		if (l[i] == 'l' || l[i] == 'L')
			l[i] = 55;
	}

	return (l);
}
