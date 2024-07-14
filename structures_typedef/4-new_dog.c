#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create nuevo dog.
 * @name: name.
 * @age: age.
 * @owner: owner.
 *
 * Return: struct dog si falla return NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int i, longname, newowner;

	p_dog = malloc(sizeof(*p_dog));
	if (!p_dog || !name || !owner)
	{
		free(p_dog);
		return (NULL);
	}

	for (longname = 0; name[longname]; longname++)
		;

	for (newowner = 0; owner[newowner]; newowner++)
		;

	p_dog->name = malloc(longname + 1);
	p_dog->owner = malloc(newowner + 1);

	if (p_dog->name == NULL || p_dog->owner == NULL)
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (i = 0; i < longname; i++)
	{
	p_dog->name[i] = name[i];
	p_dog->name[i] = '\0';

	p_dog->age = age;
	}
	for (i = 0; i < newowner; i++)
	{
	
		p_dog->owner[i] = owner[i];
	}
		p_dog->owner[i] = '\0';

	return (p_dog);
}
