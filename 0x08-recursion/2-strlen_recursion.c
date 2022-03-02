#include <stdio.h>
/**
 * _strlen_recursion(char *s) - prints a string
 *
 * @s: source string
 */

int _strlen_recursion(char *s)
{
	if (!s || !*s)
	{
		return(0);
	}

	return (1 + _print_rev_recursion(s + 1);
}
