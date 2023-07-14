#include <stdio.h>
#include <string.h>

/**
 * main - Enter point
 *
 * Description: Prints the lowercase alphabet letters from 'a' to 'z',
 *              except 'q' and 'e'.  
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char alpha[] = "abcdefghijklmnopqrstuvwxyz";
        int i = 0;

        while (alpha[i] != '\0')
        {
		if (alpha[i] == 'q')
			continue;
		if (alpha[i] == 'e')
                        continue;
                putchar(alpha[i]);
                i++;
        }

        putchar('\n');

return (0);
}
