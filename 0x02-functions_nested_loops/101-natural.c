#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - thi program prints every minute
 *
 * @n: integer value
 *
 * Return: minutes
 */
int main(void)
{
	int n = 0;
	int sum = 0;

	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
			printf("%d\n", sum);
		}
		n++;
	}
	return (0);
}
