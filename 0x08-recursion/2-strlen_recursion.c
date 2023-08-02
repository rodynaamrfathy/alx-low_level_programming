#include "main.h"

/**
 * _strlen_recursion -  returns the length of a string.
 * @s:
 *
 * Return:
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		_strlen_recursion(s + 1);
		i++;
	}
}
