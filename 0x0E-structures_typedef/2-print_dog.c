#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints dog
 * @d: pointer to struct dog type
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		if (d->age > 0 && d->name && d->owner)
			printf("Age: %.6f\n", d->age);
		else
		{
			d->age = 0;
			printf("Age: %.6f\n", d->age);
		}
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
