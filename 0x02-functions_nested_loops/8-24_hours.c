#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 */

void jack_bauer(void)
{
	int h = 0;
	for (; h <= 2; h++)
	{
		int hh = 0;

		for (; hh <= 3; hh++)
		{
			int m = 0;

			for (; m <= 5; m++)
			{
				int mm = 0;

				for (; mm < 9; mm++)
				{
					_putchar('0' + h);
					_putchar('0' + hh);
					_putchar(':');
					_putchar('0' + m);
					_putchar('0' + mm);
					_putchar('\n');
				}

			}
				}
	}
}
