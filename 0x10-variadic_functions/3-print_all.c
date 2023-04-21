#include "variadic_functions.h"
#include "3-helper_print_functions.c"

/**
 * print_all - function that prints anything.
 * @format:  list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 * any other char should be ignored
 * Print a new line at the end of your function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	types type[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_s},
		{'\0', NULL}
	};
	unsigned int i, j;
	char *separator = "";

	va_start(args, format);

	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (type[j].type)
		{
			if (format[i] == type[j].type)
			{
				printf("%s", separator);
				type[j].func(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
