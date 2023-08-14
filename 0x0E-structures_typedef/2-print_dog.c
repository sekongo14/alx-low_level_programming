#include<stdio.h>
#include "dog.h"

/**
 * print_dog - fonction
 * @d: struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		d->name = "(nil)";
	}

	if (d->owner == NULL)
	{
		d->owner = "(nil)"
	}

	printf("name: %s", d->name);
	printf("age: %.1f", d->age);
	printf("owner: %s", d->owner);
}
