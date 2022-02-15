#include "main.h"
/**
 * print_last_digit - this program prints last digit of a number
 *
 * @num: character value
 *
 * Return: num
 */

void times_table(void)
{
	char n = '0';
	char num;
  while (n <= '9')
	{
		for (num = '0'; num <= '9'; num++)
		{
			int x = num * n;
			write(1, &x, 1);
			_putchar(',');
		}
		n++;
		num = '0';
	}
}
