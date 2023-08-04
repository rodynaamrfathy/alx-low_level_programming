#include <stdio.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: counter.
 * @argv: vector.
 *
 * Return: 1 (Error) and 0 (success).
 */
int main(int argc, char *argv[])
{
	int result = 0;

	if (argc > 4 || argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = argv[2] * argv[3];
		printf("%d\n", result);
	}
	return(0)
}
