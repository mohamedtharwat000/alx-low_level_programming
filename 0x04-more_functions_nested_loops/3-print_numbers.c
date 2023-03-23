#include "main.h"

/**
 * print_numbers - function that prints the numbers,
 * from 0 to 9, followed by a new line.
 * Return: void
*/

void print_numbers(void)
{
	int counter = 0;

	while (counter < 10)
	{
		_putchar(counter + '0');
		counter++;
	}
	_putchar("/n");
}
