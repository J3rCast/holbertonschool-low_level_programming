#include "main.h"

/**
 * jack_bauer - thi program prints every minute
 *
 * Return: minutes
 */
void whileloop(char num)
{
	char a;
	char b;
	char c;
	char d;
	while (b <= num)
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
}
void jack_bauer(void)
{
	char a = '0';
	char b = '0';
	char c = '0';
	char d = '0';
	char e = '9';

	while (a <= '2')
	{
		if (a < '2')
		{
			void whileloop(char e);
		}
		else
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
		}
	b = '0';
	d = '0';
	a++;
	}
}
