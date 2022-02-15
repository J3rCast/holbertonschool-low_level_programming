#include "main.h"
/**
 * jack_bauer - this program prints laphabet follow by a new line
 *
 * Return: minutes
 */

void jack_bauer(void)
{
	char a = '0';
	char b = '0';
	char c = '0';
	char d = '0';

	while (a <= '2')
	{
		while (b <= '3')
		{
			while (c <= '5')
			{
				while (d <= '9')
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
					d++;
				}
			d = '0';
			c++;
			}
		c = '0';
		d = '0';
		b++;
		}
	b = '0';
	d = '0';
	a++;
	}
}
