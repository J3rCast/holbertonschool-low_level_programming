#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - this funcion initialize a variable
 * @d: type struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * dog - struct name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
