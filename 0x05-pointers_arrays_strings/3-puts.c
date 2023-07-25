#include "main.h"

/**
 * _puts - prints a string.
 * @str: string array.
 *
 * Return: returns nothing.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
