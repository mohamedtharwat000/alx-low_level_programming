#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * If separator is NULL, don’t print it
 * Print a new line at the end of your function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(args, n);

	while (i < n)
	{
		if (i == n - 1)
		{
			printf("%d", va_arg(args, int));
		}
		else
		{
			printf("%d", va_arg(args, int));
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
