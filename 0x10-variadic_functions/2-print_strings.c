#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 * Print a new line at the end of your function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *string;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(args, n);

	while (i < n)
	{
		string = va_arg(args, char*);

		if (!string)
		{
			string = "(nil)";
		}

		if (i == n - 1)
		{
			printf("%s\n", string);
			return;
		}

		if (!separator)
		{
			printf("%s", string);
			return;
		}

		printf("%s%s", string, separator);
		i++;
	}

	printf("\n");
	va_end(args);
}
