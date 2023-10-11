#include "search_algos.h"
/**
 * linear_search - a function that searches for a value in an array of integers
 * using the Linear search algorithm
 *
 * @array: array is a pointer to the first element of the array to search in
 * @size: size is the number of elements in array
 * @value: the value to search for
 *
 * Return:the first index where value is located
 *
 * If value is not present in array or if array is NULL,
 * your function must return -1
 * Every time you compare a value in the array to the value you are searching,
 * you have to print this value
 *
 */
int linear_search(int *array, size_t size, int value)
{

	size_t i = 0;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
