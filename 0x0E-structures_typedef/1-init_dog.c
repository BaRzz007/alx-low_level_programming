#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a struct dog variable
 * @name: name of dog
 * @d: pointer of type struct dog
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}

	/*
	 * or do this without dereferencing + accessing with the '.' symbol
	 * p->name = name;
	 * p->age = age;
	 * p->owner = owner;
	 */
}
