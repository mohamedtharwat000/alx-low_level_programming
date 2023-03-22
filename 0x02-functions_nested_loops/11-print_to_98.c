#include "main.h"
/**
 * print_to_98 - function that prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: input
*/

void print_to_98(int n)
{
	if(n > 98)
	{
		return;
	}
	else if (n > 0)
	{
		for (; n <= 98; n++)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
}