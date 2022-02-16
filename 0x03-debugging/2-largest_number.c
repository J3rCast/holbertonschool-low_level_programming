#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largestNum;

	if (a > b && a > c)
	{
		largestNum = a;
	}
	else if (b > a && b > c)
	{
		largestNum = b;
	}
	else if (c > a && c > b)
	{
		largestNum = c;
	}

	return (largestNum);
}
