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

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= '0' && *argv[i] <= '9')
		{
			result += atoi(argv[i]);
		}
		else
		{
			/*printf("Error\n");*/
			return (1);
		}
	}
	printf("%d\n", result);
	return (0);
}
