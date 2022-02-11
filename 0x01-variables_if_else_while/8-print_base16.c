#include <stdio.h>
/**
 * main - this program prints numbers
 *
 * Return: 0
 *
 */
int main(void)
{
	int n;

	for (n = 0; n <= 15; n++)
	{
		printf("%x", n);
	}
	putchar('\n');

	return (0);
}
