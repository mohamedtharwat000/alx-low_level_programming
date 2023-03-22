#include <stdio.h>
/**
 * main - prints reversed chars
 *
 * Description: using the main function
 * this program prints reversed chars
 * Return: 0
 */
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
