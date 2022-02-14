#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
void print_alphabet(void)
{
	char alfa = 'a';

	while (alfa <= 'z')
	{
		_putchar(alfa);
		alfa++;
	}
	_putchar('\n');
}
void print_alphabet_x10(void)
{
	int n = 1;

	while (n <= 10)
	{
		char alfa = 'a';

		while (alfa <= 'z')
		{
			_putchar(alfa);
			alfa++;
		}
	_putchar('\n');
	n++;
	}
}
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
int _isalpha(int c)
{
	int alpha;
	if (c >= 'A' && c <= 'Z')
	{
		alpha = 1;
	}
	else if (c >= 'a' && c <= 'z')
	{
		alpha = 1;
	}
	else
	{
		alpha = 0;
	}
	return alpha;
}
int print_sign(int n)
{
	int num;
	if (n < 0)
	{
		_putchar('-');
		return(-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return(1);
	}
	else
	{
		_putchar('0');
		return(0);
	}
}
