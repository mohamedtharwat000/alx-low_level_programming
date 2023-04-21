/* prototypes of all file functions */
void print_c(va_list arg);
void print_i(va_list arg);
void print_f(va_list arg);
void print_s(va_list arg);

/**
 * print_c - Prints a character
 * @arg: A va_list containing a character argument
 */
void print_c(va_list arg)
{
	char c = va_arg(arg, int);

	printf("%c", c);
}


/**
 * print_i - Prints an integer
 * @arg: A va_list containing an integer argument
 */
void print_i(va_list arg)
{
	int i = va_arg(arg, int);

	printf("%i", i);
}


/**
 * print_f - Prints a float
 * @arg: A va_list containing a float argument
 */
void print_f(va_list arg)
{
	float f = va_arg(arg, double);

	printf("%f", f);
}


/**
 * print_s - Prints a string
 * @arg: A va_list containing a string argument
 */
void print_s(va_list arg)
{
	char *s = va_arg(arg, char *);

	if (s == NULL)
	{
		s = "(nil)";
	}
	printf("%s", s);
}
