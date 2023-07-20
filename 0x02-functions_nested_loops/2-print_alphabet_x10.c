#include<unistd.h>
#include"main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase 10 times,
 * followed by a new line.
 */
void print_alphabet_x10(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	int j = 0;

	while (j <= 10)
	{
		while (c[i] != '\0')
		{
			_putchar(c[i]);
			i++;
		}
		j++;
	}
	_putchar('\n');
}

