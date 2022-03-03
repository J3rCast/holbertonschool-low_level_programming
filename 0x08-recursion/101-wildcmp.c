#include "main.h"
/**
 * wildcmp - this function compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: result
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '*' && *s2 == '*')
		*s1 = *s2;
	if (!s1 || !s2 || !*s1 || !*s2)
		return (0);
	if (*s1 != *s2)
		return (0);
	if (*s1 == *s2 && *s1 == '\0' && *s2 == '\0')
		return (1);

	return (wildcmp(s1 + 1, s2 + 1));
}
