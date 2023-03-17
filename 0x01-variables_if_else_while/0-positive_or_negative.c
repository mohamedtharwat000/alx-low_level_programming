#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print if the number is postive, zero, or negative
*
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%f is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%f is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}

	return (0);
}
