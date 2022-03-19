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

	if (n <= 0)
		return;

	va_start(ap, n);
	for (i = 1; i < n; i++)
	{
		if (separator != NULL)
			printf("%ld%s", va_arg(ap, long int), separator);
	}
	if (separator != NULL)
		printf("%ld", va_arg(ap, long int));
	printf("\n");
	va_end(ap);
}
