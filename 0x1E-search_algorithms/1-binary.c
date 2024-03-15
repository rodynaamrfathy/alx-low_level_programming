#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - prints the elements of an array
 *
 * @array: pointer to the array
 * @low: starting index of the sub-array
 * @high: ending index of the sub-array
 */
void print_array(int *array, int low, int high)
{
    int size = high - low + 1;
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array using binary search
 *
 * @array: pointer to the sorted array
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of the value if found, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
    {
        return (-1);
    }

    int low = 0, high = size - 1;

    while (low <= high)
    {
        int mid = (high + low) / 2;
        print_array(array + low, 0, high - low);
        if (value == array[mid])
        {
            return mid;
        }
        else if (value > array[mid])
        {
            low = mid + 1;
        }
        else if (value < array[mid])
        {
            high = mid - 1;
        }
    }

    return (-1);
}
