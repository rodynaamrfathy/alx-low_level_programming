#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_char - prints a char.
 * @separation: separation
 * @ap: list.
 *
 * Return: nothing
 */
void print_char(char *separation, va_list ap)
{
	printf("%s%c", separation, va_arg(ap, int));
}

/**
 * print_int - prrints an int.
 * @separation: separation
 * @ap: list.
 *
 * Return: nothing
 */
void print_int(char *separation, va_list ap)
{
	printf("%s%d", separation, va_arg(ap, int));
}

/**
 * print_float - prints a float.
 * @separation: separation
 * @ap: list.
 *
 * Return: nothing
 */
void print_float(char *separation, va_list ap)
{
	printf("%s%f", separation, va_arg(ap, double));
}

/**
 * print_string - prints a string
 * @separation: separation
 * @ap: list
 *
 * Return: nothing
 */
void print_string(char *separation, va_list ap)
{
	char *str = va_arg(ap, char *);

	switch ((int)(!str))
	{
	case 1:
		printf("%s(nil)", separation);
		break;
	default:
		printf("%s%s", separation, str);

	}
}

/**
 * print_all - a function that prints anything.
 * @format: format of what would be printed
 *
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	va_list ap;
	token_t link[] = {
			{"c", print_char},
			{"i", print_int},
			{"f", print_float},
			{"s", print_string},
			{NULL, NULL}
	};
	char *separation = "";

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (link[j].token)
		{
			if (format[i] == link[j].token[0])
			{
				link[j].f(separation, ap);
				separation = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
