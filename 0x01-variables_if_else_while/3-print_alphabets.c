#include <stdio.h>
/**
 * main - this program prints the alphabet
 *
 * Return: 0
 *
 */
int main(void)
{
	char ch;
	char upCh;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
	putchar(ch);
	}
	for (upCh = 'A' ; upCh <= 'Z' ; upCh++)
	{
	putchar(upCh);
	}
	putchar('\n');
	return (0);
}
