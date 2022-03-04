#include <stdio.h>
#include "main.h"

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

	while (i < argc)
	{
		if (*argv[i] <= '9' && *argv[i] >= '0')
		{
			result += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i = i + 1;
	}
	printf("%d\n", result);
	return (0);
}
