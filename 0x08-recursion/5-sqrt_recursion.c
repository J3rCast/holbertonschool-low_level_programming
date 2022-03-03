#include <stdio.h>
/**
 * _sqrt_recursion - suare root of n
 *
 * @n: number
 *
 * Return: result
 */

int _sqrt_recursion(int n, int tmp)
{
	tmp = 1;

	if (tmp >= n)
		return (-1);
	if (!n)
		return (0);
	if (tmp * tmp == n)
		return (tmp);

	return (_sqrt_recursion(n, tmp + 1));
}
