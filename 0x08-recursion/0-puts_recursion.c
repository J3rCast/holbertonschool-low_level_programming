#include <stdio.h>

void _puts_recursion(char *s)
{
	if (!s || !*s)
		return;

	putchar('%c', *s);
	_puts_recursion(s + 1);
}
