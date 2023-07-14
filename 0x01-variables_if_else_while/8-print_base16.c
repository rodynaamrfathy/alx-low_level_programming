#include <stdio.h>

/**
 * main - Enter point
 *
 * Description:
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	char num = '0';

	while (num < 10)
	{
		putchar(num);
		num++;
	}

	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
