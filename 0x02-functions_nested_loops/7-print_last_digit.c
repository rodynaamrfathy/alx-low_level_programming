#include "main.h"

/**
 * print_last_digit -  a function that prints the last digit of a number.
 * @n: number
 *
 * Return: last digit of a number.
 */
int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
	_abs(digit)
	_putchar('0' + digit);

	return (digit);
}
