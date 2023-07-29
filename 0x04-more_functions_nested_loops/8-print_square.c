#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line.
 * @size: lenght and height of the fiq.
 *
 * Return: nothing.
 */
void print_square(int size)
{
	int i, j;

	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');

}
