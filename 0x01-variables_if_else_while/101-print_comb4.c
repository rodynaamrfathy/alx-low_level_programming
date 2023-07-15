#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of three-digit numbers
 *              separated by ", " with the smallest combination only.
 *              ASCII codes are used.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	int j = 48;
	int k = 48;

	while (i <= 55)
	{
		j = i + 1;
		while (j <= 56)
		{
			k = j + 1;
			while (k <= 57)
			{
				putchar(i);
				putchar(j);
				putchar(k);

				if (i != 55 || j != 56 || k != 57)
				{
					putchar(44); /* comma */
					putchar(32); /* space */
				}

				k++;
			}
			j++;
		}
		i++;
	}

	putchar('\n');

	return (0);
}
