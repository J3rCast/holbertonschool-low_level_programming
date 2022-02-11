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

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
