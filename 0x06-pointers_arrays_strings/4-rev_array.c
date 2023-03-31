#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: array.
 * @n: n is the number of elements of the array.
 */

void reverse_array(int *a, int n)
{
	/*
	int i;
	int rev_array[n];

	for (i = 0; i < n; i++)
	{
		rev_array[i] = a[n - i - 1];
	}

	for (i = 0; i < n; i++)
	{
		a[i] = rev_array[i];
	}
	*/

	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
