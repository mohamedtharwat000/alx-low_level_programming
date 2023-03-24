#include "main.h"
#include <stdio.h>

/**
 * main - “Fizz-Buzz test”
 * Return: void
*/

int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%i ", n);
		}
		n++;
	}
	printf("\n");
	return (0);
}
