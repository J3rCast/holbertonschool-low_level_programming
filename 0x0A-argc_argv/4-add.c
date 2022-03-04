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
	int in;
	int sum = 0;

	if (argc > 1)
	{
		while (in < argc)
		{
			sum = sum + atoi(argv[in]);
			in = in + 1;
		}
		printf("%d\n", sum);
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

	/*for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= '0' && *argv[i] <= '9')
		{
			result += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", result);
	return (0);*/

}
