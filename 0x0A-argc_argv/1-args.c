#include <stdio.h>

/**
 * main -  a program that prints the number of arguments passed into it.
 * @argc: Counter.
 * @argv: vector.
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
