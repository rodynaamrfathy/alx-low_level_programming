#include "main.h"
#include <stdlib.h>

/**
 * _print - print using _putchar()
 * @str: string to be printed.
 *
 * Return: nothing.
 */
void _print(char *str)
{
	int i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * only_digits -  only be composed of digits.
 * @argc: argument counter.
 *
 * Return: 1 if true else 0.
 */
int only_digits(char *argv[])
{
	int i, j;
	
	for (i = 1 ; i < 3; i++)
	{
		for (j = 0 ; argv[i][j] != '\0' ; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				return (0);
			}
		}
	}
	return (1);
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
 * main -  a program that multiplies two positive numbers.
 * @argc: argument counter.
 * @argv: argument vector.
 *
 * Return: 0 (success)
 */
int main(int argc,char *argv[])
{
	int result;

	if (argc != 3 || !only_digits(argv))
	{
		_print("Error");
		exit (98);
	}
	
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		print_number(result);
		_print("\n");
	}

	return (0);
}
