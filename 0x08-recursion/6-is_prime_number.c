#include "main.h"

/**
 * prime_help - Helper function to check for prime numbers recursively.
 * @n: Number to check if it is prime.
 * @mod: Current divisor to check if n is divisible by.
 *
 * This function recursively checks if a given number 'n' is a prime number
 * by trying to divide it with all possible divisors from 2 to n-1. The 'mod'
 * parameter is used to keep track of the current divisor being checked.
 *
 * Return: 1 if 'n' is prime, 0 otherwise.
 */
int prime_help(int n, int mod)
{
	if (n % mod != 0 && (mod != 1 || mod != n))
	{
		return (1);
	}

	else if (n % mod == 0)
		return (0);

	return (prime_help(n, mod + 1));
}

/**
 * is_prime_number - a function that returns 1 if the input integer is a
 * prime number, otherwise return 0.
 * @n: number.
 *
 * Return: returns 1 if the input integer is a prime number,
 * otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (prime_help(n, 2));
}
