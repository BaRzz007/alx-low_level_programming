#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a struct dog variable
 * @name: name of dog
 * @d: pointer of type struct dog
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	/*
	 * or do this without dereferencing + accessing with the '.' symbol
	 * d->name = name;
	 * d->age = age;
	 * d->owner = owner;
	 */
}
