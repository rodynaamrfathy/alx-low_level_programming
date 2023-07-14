#include <stdio.h>

/**
 * main - Enter point
 *
 * Description: Prints numbers from '0' to '9' .
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}

	printf("\n");

	return (0);
}
