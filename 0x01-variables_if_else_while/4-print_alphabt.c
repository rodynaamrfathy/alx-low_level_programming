#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet letters from 'a' to 'z',
 *              except 'q' and 'e'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char ch = 'a';

    while (ch <= 'z')
    {
        if (ch != 'q' && ch != 'e')
        {
            putchar(ch);
        }
        ch++;
    }

    putchar('\n');

    return (0);
}
