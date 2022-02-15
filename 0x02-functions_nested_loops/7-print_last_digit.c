#include "main.h"
/**
 * print_last_digit - this program prints last digit of a number
 *
 * @num: number value
 *
 * Return: num
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	return(last_digit);
	_putchar(last_digit);
}
