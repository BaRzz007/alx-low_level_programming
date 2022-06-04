#include <stdlib.h>
#include "dog.h"

/**
 * new_dog -returns pointer to allocated memory for struct dog type
 * and initializes with passed args
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: pointer to newly allocated memory,
 * NULL if malloc fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(struct dog));
	if (ptr)
	{
		ptr->name = name;
		ptr->age = age;
		ptr->owner = owner;

		return (ptr);
	}
	return (NULL);
}
