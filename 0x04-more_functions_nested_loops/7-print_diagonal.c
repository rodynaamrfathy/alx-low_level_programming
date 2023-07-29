#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal.
 * @n: height of the diagonal line.
 *
 * Return: nothing.
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0 ; i < n ; i++ )
	{
		for (j = 0 ; j < i ; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}

	if (n == 0)
	{
		_putchar('\n');
	}
}
