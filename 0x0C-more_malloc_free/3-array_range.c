#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers.
 * @min: min number
 * @max: max number
 * Return: the pointer to the newly created array
 * f min > max, return NULL
 * If malloc fails, return NULL
 * The array created should contain all the values from
 * min (included) to max (included), ordered from min to max
 */

int *array_range(int min, int max)
{
	int i, size, *arr;

	size = (max - min + 1);

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int) * size);

	if (!arr)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
