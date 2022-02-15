#include "main.h"
/**
 * print_last_digit - this program prints last digit of a number
 *
 * @num: character value
 *
 * Return: num
 */

int print_last_digit(int num)
{
	int lastDigit;
	lastDigit = num % 10;
	write(1, &lastDigit, 1);
}
