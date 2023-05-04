#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 *
 * @n: number input
 * @index: the index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1, result = 0;

	if (index > 63)
	{
		return (-1);
	}

	mask <<= index;

	if ((n & mask) == mask)
	{
		result = 1;
	}

	return (result);
}
