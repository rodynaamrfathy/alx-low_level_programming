#include <stdio.h>

/**
 * main - Enter point
 *
 * Description: A program that prints all possible
 *              combinations of single-digit numbers with ','.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	
	while (i <= 57)
	{
		putchar(i);
		if (i != 57)
			putchar(', ');
		i++;
	}
	
	return (0);
}
