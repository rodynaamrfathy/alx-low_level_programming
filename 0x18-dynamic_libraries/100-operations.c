#include <stdlib.h>
#include <stdio.h>

/**
 * add - substract two numbers
 * @a: int
 * @b: int
 *
 * Return: a + b.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - substract two numbers
 * @a: int
 * @b: int
 *
 * Return: a - b.
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mult - substract two numbers
 * @a: int
 * @b: int
 *
 * Return: a x b.
 */
int mult(int a, int b)
{
	return (a * b);
}

/**
 * divison - substract two numbers
 * @a: int
 * @b: int
 *
 * Return: a / b.
 */
int divison(int a, int b)
{
	if (b == 0)
	{
		printf("not valid\n");
		return (0);
	}
	return (a / b);
}

/**
 * mod - substract two numbers
 * @a: int
 * @b: int
 *
 * Return: a % b.
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("not valid\n");
		return (0);
	}
	return (a % b);
}
