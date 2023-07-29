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
