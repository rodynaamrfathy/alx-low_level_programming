#include "main.h"

/**
 * print_number -  prints an integer.
 * @n: number to be printed.
 *
 * Return: nothing.
 */
void print_number(int n)
{
	char c;
	int temp = 0;

	if (n < 0)
	{
		_putchar('-');
	}
	
	while (temp > 0 && temp < 1)
	{
		temp = n % 10;
		n /= 10;
		c = '0' + temp;
		_putchar(c);
	}
}
