#include "main.h"

/**
 * print_triangle -  a function that prints a triangle, followed by a new line.
 * @size: height of the triangle.
 *
 * Return: nothing.
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 1 ; i <= size ; i++)
	{
		k = size - i + 1;

		while (k)
		{
			_putchar(' ');
			k--;
		}

		for (j = 0 ; j < i ; j++)
		{
			_putchar('#');
		}
		
		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
