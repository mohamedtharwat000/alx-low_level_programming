#include <stdio.h>

/**
 * main - program that prints the name of the file it was compiled from,
 * followed by a new line.
 */

void main(void)
{
	printf("%s\n", __FILE__);
}
