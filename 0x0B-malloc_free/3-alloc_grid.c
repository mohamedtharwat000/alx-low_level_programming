#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function that returns a
 * pointer to a 2 dimensional array of integers.
 * @width: arry width
 * @height: arry height
 * Return: pointer to a 2 dimensional array of integers.
 * Each element of the grid should be initialized to 0
 * The function should return NULL on failure
 * If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

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
			for (; i >= 0; i--)
			{
				free(arr[i]);
			}
			free(arr);
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
