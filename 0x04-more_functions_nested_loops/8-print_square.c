#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 * @size: number of #
 * Return: void
*/

void print_square(int size)
{
	int counter = 0;

	if (size > 0)
	{
		while (counter < size)
		{
			_putchar('\#');
			_putchar('\n');
			counter++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
