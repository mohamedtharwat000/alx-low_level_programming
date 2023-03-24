#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line.
 * @size: size of triangle (#)
 * Return: void
*/

void print_triangle(int size)
{
	if (size > 0)
	{
		int rows = 0;
		int line = 0;

		while (rows < size)
		{
			while (line < size - rows)
			{
				_putchar(' ');
				line++;
			}
			line = 0;

			while (line <= rows)
			{
				_putchar('#');
				line++;
			}
			line = 0;
			rows++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
	_putchar('\n');
}
