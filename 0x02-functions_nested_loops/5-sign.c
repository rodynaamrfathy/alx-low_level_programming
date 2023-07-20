#include "main.h"

/**
 * print_sign - prints the sign of a number. 
 * @n: number which is positive, negative or zero
 * Return: 1 greater than zero, 0 zero or -1 less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchat('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchat('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchat('-');
		return (-1);
	}
}
