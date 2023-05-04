#include "main.h"

/**
 * flip_bits - Function that returns the number of bits
 * you would need to flip to get from one number to another.
 *
 * @n: The first number.
 * @m: The second number.
 *
 * @return The number of bits that need to be flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;

	while (n != m)
	{
		if ((n & 1) != (m & 1))
		{
			count++;
		}
		n >>= 1;
		m >>= 1;
	}

	return count;
}
