#include "dog.h"
#include<stdlib.h>

/**
 * init_dog - initialize struct dog
 * @d: dog to be initialized
 * @name: name of dog
 * @age: god age
 * @owner: owner name
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
