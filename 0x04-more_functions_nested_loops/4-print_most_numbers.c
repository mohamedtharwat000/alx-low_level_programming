#include "main.h"

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9,
 * followed by a new line.
 * Return: void
*/

void print_most_numbers(void)
{
	int n = '0';

	while (n <= '9')
	{
		_putchar(n);
		n++;
		if (n == '2' || n == '4')
		{
			continue;
		}
	}
_putchar('\n');
}
