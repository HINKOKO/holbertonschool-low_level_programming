#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialization of a variable
 * of type struct dog
 * @d: pointer to struct
 * @name: name of dog
 * @age: of dog
 * @owner: master of dog
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
