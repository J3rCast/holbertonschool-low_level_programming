#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - this funcion initialize a variable
 * @d: type struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * dog - struct name
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s \n", d->name);
	if (d->age == '\0')
		printf("Age: (nil)\n");
	else
		printf("Age: %f \n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s \n", d->owner);
}
