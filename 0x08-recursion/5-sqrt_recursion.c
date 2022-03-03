#include <stdio.h>
/**
 * _sqrt_recursion - suare root of n
 *
 * @n: number
 *
 * Return: result
 */

int _sqrt_recursion(int n)
{
	int tmp = 3;

	if ((n % tmp) == 0)
		return (tmp);

	return (_sqrt_recursion(n % (tmp + 1)));
}
