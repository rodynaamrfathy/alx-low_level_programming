#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers from '0' to '9' using putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar('0' + i);
		i++;
	}

	putchar('\n');

	return (0);
}
