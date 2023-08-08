#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  a function that returns a pointer to
 * a 2 dimensional array of integers.
 * @width: no of cloumns
 * @height: no of rows
 *
 * Return: If width or height is 0 or negative, return NULL.
 */
int **alloc_grid(int width, int height)
{
	int  **new, i = 0, j ;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	new = (int **)malloc(height * sizeof(int *));
	for ( ; i < height ; i++)
	{
		new[i] = (int *)malloc(width * sizeof(int));
		for (j = 0 ; j < width ; j++)
		{
			new[i][j] = 0;
		}
	}

	return (new);

}
