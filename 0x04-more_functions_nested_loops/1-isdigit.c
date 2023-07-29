#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @c: int in ascii
 *
 * Return:  1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
