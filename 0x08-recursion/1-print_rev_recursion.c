#include "main.h"
int i = 0;

/**
 * _get_length -  a functions that gets the string lenght.
 * @s: string.
 *
 * Return: nothing
 */
void _get_length(char *s)
{
	if (*s == '\0')
	{
		return 0;
	}
	
	return 1 + _get_length(s + 1);
}

/**
 * _print_rev_recursion -  a function that prints a string in reverse.
 * @s: string.
 *
 * Return: nothing.
 */
void _print_rev_recursion(char *s)
{
	if (i == 0)
	{
		_putchar(s[i]);
		_putchar('\n');
		return;
	}

	_putchar(s[i]);
	i--;
	_print_rev_recursion(&s[i]);
}
