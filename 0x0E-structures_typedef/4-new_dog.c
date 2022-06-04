#include <stdlib.h>
#include <string.h>
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
	char *p_name, *p_owner;

	p_name = malloc(sizeof(char) * strlen(name));
	p_owner = malloc(sizeof(char) * strlen(owner));

	ptr = malloc(sizeof(dog_t));
	if (ptr && p_name && p_owner)
	{
		ptr->name = p_name;
		ptr->age = age;
		ptr->owner = p_owner;

		free(p_name);
		free(p_owner);
		return (ptr);
	}
	return (NULL);
}
