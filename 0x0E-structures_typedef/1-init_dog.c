#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function
 * @d: pointer
 * @name: name of dog
 * @age: age
 * @owner: 3rd member to be intialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
