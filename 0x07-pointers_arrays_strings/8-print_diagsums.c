#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	/* Calculate sum of first diagonal */
	for (i = 0; i < size*size; i += size+1)
	{
		sum1 += a[i];
	}

	/* Calculate sum of second diagonal */
	for (i = size-1; i < size*size-1; i += size-1)
	{
		sum2 += a[i];
	}

	/* Print sums */
	printf("%d, %d\n", sum1, sum2);
}
