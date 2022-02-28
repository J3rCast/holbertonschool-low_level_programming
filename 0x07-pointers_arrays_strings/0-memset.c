#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	char *p = &s;

	&s = b * n;
	return (&s);
}
