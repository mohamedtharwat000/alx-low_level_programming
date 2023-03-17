#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print if the number is postive, zero, or negative
*
* Description: using the main function
* this program prints "last digit of $(n)"
* Return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l > 5)
	{
		printf("Last digit of %i is %i and is greater than 5", n, l);
	} else if (l == 0)
	{
		printf("Last digit of %i is 0", n);
	} else if (l < 6)
	{
		printf("Last digit of %i is and is %i less than 6 and not 0", n, l);
	}

	return (0);
}