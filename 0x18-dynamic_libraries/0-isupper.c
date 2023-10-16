#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: char in ascii
 *
 * Return: 1 if c is uppercase (success) , 0 otherwise (failed)
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);

	else
		return (0);
}
