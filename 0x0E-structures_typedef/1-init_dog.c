#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - function to initalized a dog
 * @d: structure
 * @name: name
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
