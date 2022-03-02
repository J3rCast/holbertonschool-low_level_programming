#include <stdio.h>
/**
 * factorial - prints a string
 *
 * @n: sourc number
 *
 * Return: len or 0
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
