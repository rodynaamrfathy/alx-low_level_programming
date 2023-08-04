#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the minimum number of coins to
 *       make change for an amount of money.
 * @argc: The number of arguments in the command line.
 * @argv: Pointer to an array of command line arguments.
 *
 * Return: 0 if successful, 1 if there is an error.
 */
int main(int argc, char *argv[])
{
	int i, leastcents = 0, money;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);

	if (money < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		if (money >= cents[i])
		{
			leastcents += money / cents[i];
			money %= cents[i];
			if (money == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", leastcents);

	return (0);
}
