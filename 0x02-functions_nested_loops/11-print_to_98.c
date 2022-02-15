#include "main.h"
/**
 * add - thi program prints every minute
 *
 * @n: first value
 * @m: second value
 *
 * Return: minutes
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while(n <= 98)
		{
			printf("%d\, ", n)
			n++;
		}
	}
	else if (n > 98)
	{
		while(n >= 98)
		{
			printf("%d\, ", n)
			n--;
		}
	}
	else
	{
		printf("%d\n", n)
	}
}
