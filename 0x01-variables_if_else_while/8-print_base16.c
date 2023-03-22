#include <stdio.h>
/**
 * main - prints hex numbers
 *
 * Description: using the main function
 * this program prints hex numbers
 * Return: 0
 */
int main(void)
{
int c;
for (c = '0'; c <= '9'; c++)
{
putchar(c);
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
