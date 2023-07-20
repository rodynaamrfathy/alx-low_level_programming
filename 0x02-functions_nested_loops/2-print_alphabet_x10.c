#include<unistd.h>
#include"main.h"

/**
 * print_alphabet_x10 - prints the alphabet, in lowercase 10 times,
 * followed by a new line.
 */
void print_alphabet_x10(void)
{
	int j = 0;

	while (j < 10)
	{
		print_alphabet();
		_putchar('\n');
		j++;
	}
	_putchar('\n');
}

