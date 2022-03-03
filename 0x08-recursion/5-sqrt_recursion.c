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
	int tmp = 1;

	if (tmp * tmp == n)
		return (tmp);

	return (_sqrt_recursion(tmp + 1));
}
