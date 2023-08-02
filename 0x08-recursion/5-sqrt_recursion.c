#include "main.h"

/**
 * find_sqrt - a helper function to find the square root recursively.
 * @n: int.
 * @guess: int.
 *
 * Return: returns the natural square root of a number,
 * If n does not have a natural square root, the function should return -1
 */

int find_sqrt(int n, int guess)
{
	if (n < 0)
	    	return (-1);

	if (guess * guess == n)
		return guess;

	if (guess * guess > n)
		return (-1);

	return find_sqrt(n, guess + 1);
}

/**
 * _sqrt_recursion -  a function that returns the natural square
 * root of a number.
 * @n: int.
 *
 * Return: returns the natural square root of a number,
 * If n does not have a natural square root, the function should return -1
 */
int _sqrt_recursion(int n)
{
	return find_sqrt(n, 1);
}
