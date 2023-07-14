#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints both lowercase and uppercase alphabet letters
 *              from 'a' to 'z' and 'A' to 'Z' on the same line
 *              using two arrays and two while loops.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
    char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i = 0;

    while (lowercase[i] != '\0')
    {
        putchar(lowercase[i]);
        i++;
    }

    i = 0;

    while (uppercase[i] != '\0')
    {
        putchar(uppercase[i]);
        i++;
    }

    putchar('\n');

    return (0);
}
