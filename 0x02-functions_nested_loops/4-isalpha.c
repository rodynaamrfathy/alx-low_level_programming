#include "main.h"

/**
 * _isalpha - checks for alphabetic character, using ascii codes
 * @c:  The character to check (ASCII value)
 *
 * Return: 1 (Success) if it is a lowercase character,
 *         0 (Error) otherwise.
 */
int _isalpha(int c)
{
	if ((c > 97 && c < 122) || (c > 65 && c < 90))
	{
		return (1);
	}
	else
		return (0);
}
