#include <stddef.h>
#include "function_pointers.h"
/**
 * print_name - this fucntion prints a name
 * @name: name to print
 * @f: pointer function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return (NULL);
	void (*n)(char *) = f;
	(*n)(name);
}
