#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - this funcion prints dog info
 * @d: type struct
 * dog - struct name
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name)
		printf("Name: %s \n", d->name);
	else
		printf("Name: (nil)\n");
	if (d->age)
		printf("Age: %.6f \n", d->age);
	else
		printf("Age: (nil)\n");
	if (d->owner)
		printf("Owner: %s \n", d->owner);
	else
		printf("Owner: (nil)\n");
}
