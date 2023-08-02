#include "main.h"

/**
 * factorial -  a function that returns the factorial of a given number.
 * @n: int.
 *
 * Return: If n is lower than 0,
 * the function should return -1 to indicate an error
 * Factorial of 0 is 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 1 || n == 0)
	{
		return (1);
	}

	else 
	{
		return (n * factorial(n - 1));
	}
}
