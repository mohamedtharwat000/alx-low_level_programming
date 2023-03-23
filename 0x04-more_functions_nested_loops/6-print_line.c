#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: number of _
 * Return: void
*/

void print_line(int n)
{
	int counter = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (counter <= n)
		{
			_putchar('_');
			n++;
		}
		_putchar('\n');
	}
}
