#include <stdio.h>
/**
 * main - this program prints numbers
 *
 * Return: 0
 *
 */
int main(void)
{
	int firstChar;
	int secChar;

	for (firstChar = '0'; firstChar < '9'; firstChar++)
	{
		for (secChar = '1'; secChar <= '9'; secChar++)
		{
			if (firstChar < secChar)
			{
				putchar(firstChar);
				putchar(secChar);
				if (firstChar < '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
