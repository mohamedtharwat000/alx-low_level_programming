#ifndef HEADER_H
#define HEADER_H

#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct types - supported types
 * @type: type of the argument
 * @func: function pointer to handle the argument
 */
typedef struct types
{
	char type;
	void (*func)(va_list);
} types;

#endif /* HEADER_H */
