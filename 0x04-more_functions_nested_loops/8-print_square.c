#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 * @size: number of #
 * Return: void
*/

void print_square(int size)
{
	int counter = 0;
	int square = 0;

	if (size > 0)
	{
		while (counter < size)
		{
			while (square < size)
			{
				_putchar('#');
				square++;
			}
			_putchar('\n');
			square = 0;
			counter++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
