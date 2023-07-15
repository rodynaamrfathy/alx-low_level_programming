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
	int i = 48;
	int j = 48;

	while (i <= 57)
	{
		while (j <= 57)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (i != 56 && j != 57)
				}
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		j = 48;
		i++;
	}

	putchar('\n');

	return (0);
}
