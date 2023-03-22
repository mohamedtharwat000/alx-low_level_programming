#include <stdio.h>
/**
 * main - print the alphabet lower and upper case
 *
 * Description: using the main function
 * this program prints letters in lower and upper case
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
