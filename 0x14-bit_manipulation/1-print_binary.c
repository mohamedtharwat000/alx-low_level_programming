#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 *
 * @n: number input
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask < n)
	{
		mask <<= 1;
	}

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
