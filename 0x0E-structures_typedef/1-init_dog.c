#include <stdio.h>
#include "dog.h"

/**
 * init_dog - dog struct
 * @d: struct
 * @name: member
 * @age: member
 * @owner: member
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
