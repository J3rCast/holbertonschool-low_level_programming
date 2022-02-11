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

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
