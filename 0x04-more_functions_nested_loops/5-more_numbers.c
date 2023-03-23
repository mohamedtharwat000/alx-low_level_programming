#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 * Return: void
*/

void more_numbers(void)
{
	int outer = 0;
	int inner = 0;

	while (outer < 10)
	{
		while (inner <= 14)
		{
			if (inner > 9)
			{
				_putchar(inner / 10 + '0');
			}
			_putchar(inner % 10 + '0');
			inner++;
		}
		_putchar('\n');
		inner = 0;
		outer++;
	}
_putchar('\n');
}
