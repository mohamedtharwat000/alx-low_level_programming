#include <stdio.h>
/**
 * main - prints numbers as chars
 *
 * Description: using the main function
 * this program prints numbers as chars
 * Return: 0
 */
int main(void)
{
int d;
for (d = '0'; d <= '9'; d++)
{
	putchar(d);
}
putchar('\n');
return (0);
}
