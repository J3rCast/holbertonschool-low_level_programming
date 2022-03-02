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

	if (tmp == n)
		return (-1);
	if ((n % tmp) == 0)
		return (tmp);
	if ((n % tmp) >= 1)
		return (1);

	return (_sqrt_recursion(n % (tmp + 1)));
}
