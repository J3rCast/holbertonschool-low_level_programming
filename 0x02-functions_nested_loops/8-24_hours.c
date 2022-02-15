#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * jack_bauer - this program prints laphabet follow by a new line
 *
 * Return: minutes
 */

int main(void)
{
	char a = '0';
	char b = '0';
	char c = '0';
	char d = '0';

	while (a <= '2')
	{
		if (a < '2')
		{
			while (b <= '9')
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
