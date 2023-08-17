#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

#include <stdio.h>
#include <stdarg.h>

/**
 * struct token - making a struct for everu format and it's function.
 *
 * @token: format token.
 * @f: the function associated.
 */
typedef struct token
{
	char *token;
	void (*f)(char *, va_list);
}token_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


#endif
