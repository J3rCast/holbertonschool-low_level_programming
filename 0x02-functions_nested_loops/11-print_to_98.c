#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - thi program prints every minute
 *
 * @n: integer value
 *
 * Return: minutes
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while(n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("\n");
	}
	else if (n > 98)
	{
		while(n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("\n");
	}
	else
	{
		printf("%d\n", n);
	}
}