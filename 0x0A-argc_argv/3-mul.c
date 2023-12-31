#include <stdio.h>
#include <stdlib.h>

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
		return (printf("Error\n"), 1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	return (0);
}
