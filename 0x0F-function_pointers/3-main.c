#include "3-calc.h"

/**
 * main -  a program that performs simple operations.
 * @argc: argument counter.
 * @argv: argument vector.
 *
 * Return: 0 (success).
 */
int main(int argc, char *argv[])
{
	int (*op_func)(int, int), a, b;

	if (argc != 4)
		printf("Error\n"), exit(98);

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
		printf("Error\n"), exit(99);

	if (argv[2][0] == '/' || argv[2][0] == '%' || !b)
		printf("Error\n"), exit(100);

	printf("%d\n", op_func(a, b));

	return (0);
}
