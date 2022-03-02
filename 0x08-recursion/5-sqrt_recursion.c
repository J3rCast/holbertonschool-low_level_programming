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
	int tmp = 2;

	if (tmp == n)
		return (-1);
	if ((n % tmp) == 0)
		return (tmp);

	return (_sqrt_recursion(n % (tmp + 1)));
}
