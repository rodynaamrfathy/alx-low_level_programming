#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that calculates the minimum number of coins required to make change.
 * The available coin denominations are 25 cents, 10 cents, 5 cents, 2 cents, and 1 cent.
 *
 * @argc: The number of command line arguments (including the program name).
 * @argv: An array of strings containing the command line arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
    int i, leastcents = 0, money;

    if (argc != 2)
    {
        printf("Usage: %s amount\n", argv[0]);
        return 1;
    }

    // Convert the amount provided as a command line argument to an integer
    money = atoi(argv[1]);

    // Array containing the available coin denominations
    int cents[] = {25, 10, 5, 2, 1};

    // Loop through the coin denominations and calculate the minimum number of coins required
    for (i = 0; i < 5; i++)
    {
        if (money >= cents[i])
        {
            leastcents += money / cents[i]; // Add the number of coins for this denomination
            money = money % cents[i]; // Update the remaining amount after using this denomination
        }
    }

    // Print the minimum number of coins required to make change
    printf("%d\n", leastcents);

    return 0;
}
