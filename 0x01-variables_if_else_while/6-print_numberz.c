#include <stdio.h>
/**
 * main - print if the number is postive, zero, or negative
 *
 * Description: using the main function
 * this program prints numbers as chars
 * Return: 0
 */
int main(void)
{
char d;
for (d = '0'; d <= '9'; d++)
{
	putchar(d);
}
putchar('\n');
return (0);
}
