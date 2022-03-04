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
int main(int argc, char *argv[])
{
	int i;
	int result = 0;

	if (argc > 1)
	{
		while (i < argc)
		{
			result = result + atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	else if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
