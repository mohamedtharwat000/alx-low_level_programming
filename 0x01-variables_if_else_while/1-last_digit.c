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
	int l = n % 10;

	if (l > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, l);
	} else if (l == 0)
	{
		printf("Last digit of %i is %i 0\n", n, l);
	} else if (l < 6)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, l);
	}
	return (0);
}
