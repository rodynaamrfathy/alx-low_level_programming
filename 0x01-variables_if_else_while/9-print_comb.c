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
	char i = '0';
	
	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
			putchar(',');
		i++;
	}
	
	return (0);
}
