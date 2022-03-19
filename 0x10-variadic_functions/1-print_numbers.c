#include "variadic_functions.h"
/**
 * print_numbers - this function sum all the arguments passed
 * @separator: separator char
 * @n: last argument fixed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n == 0)
		return;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
			printf("%u%s", va_arg(ap, const unsigned int), separator);
	}
	printf("\n");
	va_end(ap);
}
