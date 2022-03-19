#include "variadic_functions.h"
/**
 * print_numbers - this function print all the integers passed
 * @separator: separator char
 * @n: number of arguments passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *argString;
	unsigned int i;

	va_start(ap, n);
	for (i = 1; i < n; i++)
	{
		argString = va_arg(ap, char *);

		if (argString != NULL)
			printf("%s%s", argString, separator);
		else
			printf("(nil)%s", separator);
	}
	printf("%s", va_arg(ap, char *));
	printf("\n");
	va_end(ap);
}
