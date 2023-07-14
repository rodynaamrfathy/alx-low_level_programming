#include <stdio.h>
#include <string.h>

/**
 *
 * main - Enter point
 *
 * Description: This program prints all the
 *              lower case alphabets. 
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while(alpha[i] != '\0')
	{
		putchar(alpha[i]);
		putchar('\n');
		i++;
	}

return (0);
}
