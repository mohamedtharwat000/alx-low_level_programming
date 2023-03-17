#include <stdio.h>
/**
 * main - print if the number is postive, zero, or negative
 *
 * Description: using the main function
 * this program prints hex numbers
 * Return: 0
 */
int main(void)
{
int c;
for (c = '0x0'; c <= '0xf'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
