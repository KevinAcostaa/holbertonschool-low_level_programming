#include "dog.h"
#include <stdio.h>
/**
 * init_dog - function
 * @name: nombre
 * @age: edad
 * @owner: owner
 * @d: pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
