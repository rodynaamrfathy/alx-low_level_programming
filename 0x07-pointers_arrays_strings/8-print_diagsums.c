#include "main.h"

/**
 * print_number - prints an integer using _putchar.
 * @n: number to be printed.
 *
 * Return: nothing.
 */
void print_number(int n)
{
	char c;
	int temp = (n < 0) ? -n : n;
	int reversed = 0;

	if (n < 0)
	{
		_putchar('-');
	}

	if (temp == 0)
	{
		_putchar('0');
		return;
	}

	while (temp != 0)
	{
		reversed = reversed * 10 + temp % 10;
		temp /= 10;
	}

	while (reversed != 0)
	{
		temp = reversed % 10;
		c = '0' + temp;
		_putchar(c);
		reversed /= 10;
	}
}

/**
 * print_diagsums -  prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: matrix.
 * @size: its size.
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(i * size) + i];
		sum2 += a[(i * size) + (size - 1 - i)];
	}

	print_number(sum1);
	_putchar(',');
	_putchar(' ');
	print_number(sum2);
	_putchar('\n');
}
