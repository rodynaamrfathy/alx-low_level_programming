#include "main.h"

/**
 * print_diagsums -  a function that prints the sum of the 
 * two diagonals of a square matrix of integers.
 * @a: matrix.
 * @size: it's size.
 * 
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, sum;

	for (i = 0 ; i < size ; i++)
	{
		sum += a[i][i]
	}

	i = 0;
	size--;

	for (i = 0 ; i = size ; i++)
	{
		sum += a[i][size];
		sum += a[size][i];
		size--;
	}
}
