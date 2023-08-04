#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line.
 * if you rename the program, it will print the new name,
 * without having to compile it again
 * You should not remove the path before the name of the program
 * @argc: argument counter.
 * @argv: argument vector.
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("this is file name, %s\n", argv[0]);
	return (0);
}
