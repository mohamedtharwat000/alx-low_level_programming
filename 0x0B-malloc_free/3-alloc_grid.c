#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function that returns a
 * pointer to a 2 dimensional array of integers.
 * @width: arry width
 * @sheight: arry height
 * Return: pointer to a 2 dimensional array of integers.
 * Each element of the grid should be initialized to 0
 * The function should return NULL on failure
 * If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	int i = 0;
	int j = 0;
	int **arr;

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);

		if (arr[i] == NULL)
		{
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
