#include "stdio.h"
/**
 * print_to_98 - function that prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: input
*/

void print_to_98(int n)
{
	if (n >= 1 && n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			printf(",");
			printf(" ");
		}
	}
}
