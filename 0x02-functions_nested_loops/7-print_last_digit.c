#include "main.h"
/**
 * print_last_digit - this program prints last digit of a number
 *
 * @num: character value
 *
 * Return: num
 */

int print_last_digit(num)
{
	int lastDigit;
	lastDigit = (1 * num) % 10;
	return (lastDigit);
}
