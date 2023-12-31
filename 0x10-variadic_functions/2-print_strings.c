#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: separator.
 * @n: number of arguments.
 * @...: arguments that would be passed.
 *
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i = 0;
	char *temp;

	va_start(ptr, n);
	for (; i < n; i++)
	{
		temp = va_arg(ptr, char *);
		if (temp == NULL)
			printf("(nil)");
		else
			printf("%s", temp);
		if (i + 1 < n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
