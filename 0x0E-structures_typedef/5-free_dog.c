#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - this funcion frees dogs
 * @d: dog name
 */
void free_dog(dog_t *d)
{
	free(d);
	free(d->name);
	free(d->owner);
}
