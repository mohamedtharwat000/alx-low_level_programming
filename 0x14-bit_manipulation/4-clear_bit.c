#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 *
 * @n: number input
 * @index: the index, starting from 0 of the bit you want to get
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 63)
	{
		return (-1);
	}

	mask = ~(1 << index);

	*n &= mask;

	return (1);

}
