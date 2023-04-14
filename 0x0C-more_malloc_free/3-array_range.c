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

int *array_range (int min, int max)
{
	int i, *arr;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc (sizeof (int) * (max - min + 1));

	if (!arr)
	{
		return (NULL);
	}

	for (i = 0; i < (max - min + 1); i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
