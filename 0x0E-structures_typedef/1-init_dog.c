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
	struct dog *p;

	p = &d;
	p = malloc(sizeof(struct dog));

	(*p).name = name;
	(*p).age = age;
	(*p).owner = owner;

	/*
	 * or do this without dereferencing + accessing with the '.' symbol
	 * p->name = name;
	 * p->age = age;
	 * p->owner = owner;
	 */
}
