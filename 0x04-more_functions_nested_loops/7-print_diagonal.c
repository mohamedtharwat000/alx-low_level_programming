#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: number of \
 * Return: void
*/

void print_diagonal(int n)
{
	int counter = 0;
	int spaces = 0;

	if (n > 0)
	{
		while (counter < n)
		{
			while (spaces < counter)
			{
				_putchar(' ');
				spaces++;
			}
			_putchar('\\');
			_putchar('\n');
			spaces = 0;
			counter++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
