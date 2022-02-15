#include "main.h"
#include <unistd.h>
/**
 * main - this program prints alphabet
 *
 * Return: 0
 */

int main(void)
{
	char alfa = 'a';

	while (alfa <= 'z')
	{
		_putchar(alfa);
		alfa++;
	}
	_putchar('\n');
	
	return(0);
}
