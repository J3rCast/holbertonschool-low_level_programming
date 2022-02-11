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
		if (ch != 'e')
		{
			if (ch != 'q')
			{
				putchar(ch);
			}
		}
	}
	putchar('\n');
	return (0);
}
