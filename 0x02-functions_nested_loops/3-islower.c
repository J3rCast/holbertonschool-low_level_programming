#include "main.h"
/**
 * main - this program prints laphabet follow by a new line
 *
 * Return: 0
 */

int _islower(int c)
{
	int num;
	if (c >= 'a' && c <= 'z')
	{
		num = 1;
	}
	else
	{
		num = 0;
	}
	return num;
}
