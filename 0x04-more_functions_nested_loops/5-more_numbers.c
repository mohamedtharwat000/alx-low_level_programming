#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 * Return: void
*/

void more_numbers(void)
{
	char outer = 0;
	char inner = 0;

	while (outer < 10)
	{
		while (inner <= 14)
		{
			_putchar(inner + '0');
			inner++;
		}
		_putchar('\n');
		outer++;
	}
_putchar('\n');
}
