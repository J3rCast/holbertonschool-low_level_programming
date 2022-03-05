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
	int coins[] = { 25, 10, 5, 2, 1 };
	int i;
	int x = atoi(argv[1]);
	/*int amount = 0;*/
	int value = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (*argv[1] <= 0)
	{
		printf("0\n");
	}
	for (i = 0; x > 0; i++)
	{
		if (coins[i] <= x)
		{
			/*amount += coins[i];*/
			x = x - coins[i];
			value++;
		}
		else if (coins[i] == x)
		{
			printf("1\n");
			return(0);
		}
	}
	printf("%d\n", value);

	return (0);
}
