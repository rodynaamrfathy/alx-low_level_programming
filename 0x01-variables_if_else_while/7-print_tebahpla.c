#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet letters from 'a' to 'z',
 *              in reverse.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 25;

	while (i >= 0)
	{
		putchar(alpha[i]);
		i--;
	}

	putchar('\n');

	return (0);
}
