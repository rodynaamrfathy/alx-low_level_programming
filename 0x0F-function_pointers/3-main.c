#include "3-calc.h"

/**
 * Entry point main
 * @argc: argument counter.
 * @argv: argument vector.
 *
 * Return: 0 (success).
 */
int main(int argc, char *argv[])
{
	int (*op_func)(int, int), a, b;

	if(argc != 4)
		printf("Error\n"), exit(98);

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op_func = get_op_func(argv[2]);
	if(!op_func)
		printf("Error\n"), exit(99);

	if (argv[2] == "/" || argv[2] == "%" || !b)
		printf("Error\n"), exit(100);

	printf("%d\n", op_func(a, b));

	return (0);
}
