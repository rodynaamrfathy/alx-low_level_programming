#include "function_pointers.h"

/**
 * array_iterator - Write a function that executes a
 * function given as a parameter on each element of an array.
 * @array: pointer to an int.
 * @size:the size of the array
 * @action:a pointer to the function you need to use.
 *
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL)
		return;
	for (; i <  size ; i++)
		action(array[i]);
}
