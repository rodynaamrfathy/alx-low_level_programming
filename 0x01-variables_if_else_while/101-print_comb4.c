#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of three-digit numbers
 *              separated by ", " with the smallest combination only.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i = 48;

    while (i <= 55)
    {
        int j = i + 1;

        while (j <= 56)
        {
            int k = j + 1;

            while (k <= 57)
            {
                putchar(i);
                putchar(j);
                putchar(k);

                if (i != 55)
                {
                    putchar(',');
                    putchar(' ');
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
