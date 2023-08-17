#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: no. of parameters to be passed.
 * @...: Additional arguments based on n specifiers.
 * to be added
 *
 * Return: return the sum & 0  if n = 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(ptr, n);
	for (i = 0 ; i < n ; i++)
		sum += va_arg(ptr, int);

	va_end(ptr);
	return (sum);
}
