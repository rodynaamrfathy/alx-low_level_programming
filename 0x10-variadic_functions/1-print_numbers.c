#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: to be printed between numbers.
 * @n: number of arguments.
 *
 * Retrun: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i = 0;

	va_start(ptr, n);
	for (; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));
		if (i + 1 < n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
