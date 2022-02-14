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
	int thirdChar;

	for (firstChar = '0'; firstChar <= '7'; firstChar++)
	{
		for (secChar = '1'; secChar <= '8'; secChar++)
		{
			for (thirdChar = '2'; thirdChar <= '9'; thirdChar++)
			{
				if (firstChar < secChar && secChar < thirdChar)
				{
					putchar(firstChar);
					putchar(secChar);
					putchar(thirdChar);
					if (firstChar < '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
			
		}
	}
	putchar('\n');

	return (0);
}
