#include "function_pointers.h"

/**
 * int_index -  a function that searches for an integer.
 * @array: of numbers
 * @size: s the number of elements in the array array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array || cmp)
		return (-1);
	i = 0;
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}

	return (-1);
}
