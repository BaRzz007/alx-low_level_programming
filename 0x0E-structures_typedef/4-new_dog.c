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
	unsigned int size1, size2, i;

	size1 = strlen(name);
	size2 = strlen(owner);
	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->name = malloc(sizeof(char) * (size1 + 1));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->owner = malloc(sizeof(char) * (size2 + 1));
	if (ptr->owner == NULL)
	{
		free(ptr);
		free(ptr->name);
		return (NULL);
	}
	for (i = 0; i < size1; i++)
		ptr->name[i] = name[i];
	for (i = 0; i < size2; i++)
		ptr->owner[i] = owner[i];
	for (i = 0; name[i] != '\0'; i++)
		ptr->name[i] = name[i];
	ptr->name[i] = '\0';
	for (i = 0; i < size2; i++)
		ptr->owner[i] = owner[i];
	i++;
	ptr->owner[i] = '\0';
	ptr->age = age;
	return (ptr);
}
