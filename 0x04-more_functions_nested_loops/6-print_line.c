#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: number of _
 * Return: void
*/

void print_line(int n)
{
	int counter = 0;

	while (counter <= n)
	{
		_putchar('_');
		counter++;
	}
	_putchar('\n');
}
