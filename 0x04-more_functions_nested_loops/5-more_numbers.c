#include "main.h"

/**
 * more_numbers -  a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 *
 * Return: nothing.
 */
void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		for (j = 0 ; j < 15 ; j++)
		{
			if (j >= 10)
			{
				_putchar('0' + j / 10);
			}
			_putchar('0' + j % 10);
		}
		_putchar('\n');
		i++;
	}
}
