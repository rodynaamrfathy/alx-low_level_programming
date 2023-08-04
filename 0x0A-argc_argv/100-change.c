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
		/* Incorrect number of arguments provided */
		printf("Error\n");
		return (1);
	}

	/* Convert the command line argument to an integer */
	money = atoi(argv[1]);

	if (money < 0)
	{
		/* Negative amount provided */
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		if (money >= cents[i])
		{
			/* Calculate the number of coins of the current denomination */
			leastcents += money / cents[i];
			/* Update the remaining amount */
			money %= cents[i];

			/* Check if the remaining amount is 0 */
			if (money == 0)
			{
				/* If the remaining amount is 0, break the loop */
				break;
			}
		}
	}

	/* Print the minimum number of coins required */
	printf("%d\n", leastcents);

	return (0);
}
