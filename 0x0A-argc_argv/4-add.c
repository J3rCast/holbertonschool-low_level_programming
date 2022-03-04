#include "main.h"
#include <stdio.h>

/**
 * main - this program prints its name
 *
 * @argc: number of arguments
 * @argv: string of arguments
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;
	int result = 0;

	for (i = 1; argv[i]; i++)
	{
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
