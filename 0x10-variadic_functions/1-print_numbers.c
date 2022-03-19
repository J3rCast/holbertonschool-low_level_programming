#include "variadic_functions.h"
/**
 * print_numbers - this function print all the integers passed
 * @separator: separator char
 * @n: number of arguments passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n == 0)
		return;

	va_start(ap, n);
	for (i = 1; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("%d", va_arg(ap, int));
	printf("\n");
	va_end(ap);
}
