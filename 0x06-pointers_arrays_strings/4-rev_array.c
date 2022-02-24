#include "main.h"
/**
 * _strcmp - this function concatnates two strings
 *
 * @s1: dest string
 * @s2: src string
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	char charAc;
	int j = 0;

	while (j <= n)
	{
		charAc = a[j];
		a[j] = a[n];
		a[n] = charAc;
		n--;
		j++;
	}
}
