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
	int n = 0;
  while (n <= 9)
	{
		for (int num = 0; num <= 9; num++)
		{
			int x = num * n;
			_putchar(x);
		}
		n++;
		num = 0;
	}
}
