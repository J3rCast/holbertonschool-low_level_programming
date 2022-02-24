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
	int i = 0;
	int j = 0;

	while (a[i] != '\0')
	{
		i++;
	}
	i--;
	while (j <= i)
	{
		charAc = a[j];
		a[j] = a[i];
		a[i] = charAc;
		i--;
		j++;
	}
}
