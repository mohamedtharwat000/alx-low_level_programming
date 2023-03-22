#include "main.h"

/**
 * times_table - function that prints the 9 times table,
 * starting with 0.
 */

void times_table(void)
{
	int row;
	int column;
	int number;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			number = (row * column);

			if (column == 0)
			{
				_putchar('0' + number);
			}
			else if (number <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + number);
			}
			else if (number > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (number / 10));
				_putchar('0' + (number % 10));
			}
		}
		_putchar('\n');
	}
}
