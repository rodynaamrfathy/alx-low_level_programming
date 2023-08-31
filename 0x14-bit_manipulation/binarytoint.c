#include "main.h"

/**
 * rev -  rev a string
 * @b: is pointing to a string of 0 and 1 chars.
 *
 * Return: char*
 */
char *rev(const char *b)
{
	char *c;
	int i = -1;

	if (*b > '\0')
	{
		rev(b + 1);
		i++;
		c[i] = *b; 
	}

	return (c);
}

/**
 * power - power
 * @i: pow
 *
 * Return : power
 */
int power(int i)
{
	int result = 1;

	if (i == 0)
		return (1);
	while(i > 0)
	{
		result *= 2;
		i--;
	}
	return (result);
}

/**
 * binary_to_uint - a function that converts a binary
 * number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars. 
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i, index = 0;
	char *c;
	unsigned int result = 0;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' || b[i] != '0')
			return (0);
	}
	c = rev(b);
	
	for (i = 0; c[i] != '\0'; i++)
	{
		index = power(i);
		result += (c[i] * index);	
	}
}
