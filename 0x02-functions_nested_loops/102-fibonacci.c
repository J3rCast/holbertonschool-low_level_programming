#include "main.h"
#include <stdio.h>
/**
 * main - this program prints every minute
 *
 * Return: sum
 */
int main(void)
{
	int n = 0;
	int m = 1;
	int sum = 0;

	while (n <= 50)
	{
		sum += m;
		printf("%d, ", sum);
		m++;
		n++;
	}
	printf("\n");
	return (0);
}
