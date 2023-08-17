#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to print.
 *
 * Return: 1 on success, -1 on error.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * _print - print using _putchar()
 * @str: string to be printed.
 *
 * Return: nothing.
 */
void _print(const char *str)
{
        int i = 0;
        while (str[i])
        {
                _putchar(str[i]);
                i++;
        }
}

/**
 * print_number - Prints an integer.
 * @n: Number to be printed.
 *
 * Return: void
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
 * print_numbers -  a function that prints numbers, followed by a new line.
 * @separator: a string that separated numbers.
 * @n: number of arguments to be passed.
 * @...: arguments to be added.
 *
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;	

	va_start(ptr, n);
	if (n == 0)
		return;
	for (i = 0 ; i < n ; i++)
	{
		print_number(va_arg(ptr, int));
		if (i + 1 < n && separator != NULL)
			_print(separator);	
	}
	_putchar('\n');
	va_end(ptr);
}
