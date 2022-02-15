#include <unistd.h>


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/*this function prints alphabet*/
void print_alphabet(void);

/*this function print alphabet in ten lines*/
void print_alphabet_x10(void);

/*this function identifies if a letter is lowercase or not*/
int _islower(int c);

/*this function identifies if the character is alpha or not*/
int _isalpha(int c);

/*this funtion prints the sign of a number*/
int print_sign(int n);
/*{
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
}*/

/*this fuctio coputes the absolute value of an integer*/
int _abs(int num);
/*{
	if (num < 0)
	{
		num = num * -1;
		return(num);
	}
	else
	{
		num = num * 1;
		return(num);
	}
}*/

/*this fuction prints the last digit of a number*/

/*REMINDER, DOESNT WORK*/
int print_last_digit(int num);
/*{
	int lastDigit;
	lastDigit = num % 10;
	_putchar(lastDigit);
	return(0);
}*/

/*this function prints every minute of the day of Jack Bauer*/
void jack_bauer(void);
/*{
	char a = '0';
	char b = '0';
	char c = '0';
	char d = '0';

	while (a <= '2')
	{
		while (b <= '3')
		{
			while (c <= '5')
			{
				while (d <= '9')
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
					d++;
				}
			d = '0';
			c++;
			}
		c = '0';
		d = '0';
		b++;
		}
	b = '0';
	d = '0';
	a++;
	}
}*/
