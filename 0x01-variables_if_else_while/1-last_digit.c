#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - this program find out what is the last digit of a number
 *
 * Return: 0
 *
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit = n % 10;
	if (n = 0)
	{
		printf("Last digit of %d is %d and is 0", n, lastDigit);
	}
	else if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, lastDigit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lastDigit);
	}
	return (0);
}
