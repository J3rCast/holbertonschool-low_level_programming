#include "variadic_functions.h"
/**
 * _strlen - this function return the legth of a string
 *
 * @s: value
 *
 * Return: value
 */
int _strlen(const char *s)
{
	char n = 'a';
	int i = 0;

	while (n != '\0')
	{
		n = s[i];
		i++;
	}
	return (i - 1);
}
/**
 * print_all - this function print all
 * @format: list of types of arguments passed
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int j = 0, integer, x = 0;
	float floatNum;
	char *string;

	va_start(ap, format);
	while (j < _strlen(format))
	{
		x = 0;
		switch (format[j])
		{
			case 'c':
				
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				integer = va_arg(ap, int);
				printf("%d", integer);
				break;
			case 'f':
				floatNum = va_arg(ap, double);
				printf("%f", floatNum);
				break;
			case 's':
				string = va_arg(ap, char *);
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
			default:
				x = 1;
		}
		if (j != (_strlen(format) - 1) && x == 0)
			printf(", ");
		j++;
	}
	printf("\n");
}
