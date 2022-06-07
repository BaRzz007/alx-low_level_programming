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
	unsigned int size1, size2, i;

	for (size1 = 0; name[size1] != '\0'; size1++)
		;
	for (size2 = 0; owner[size2] != '\0'; size2++)
		;

	p_name = malloc(sizeof(char) * size1 + 1);
	p_owner = malloc(sizeof(char) * size2 + 1);
	ptr = malloc(sizeof(dog_t));

	for (i = 0; i < size1; i++)
		p_name[i] = name[i];
	for (i = 0; i < size2; i++)
		p_owner[i] = owner[i];

	if (ptr && p_name && p_owner)
	{
		ptr->name = p_name;
		ptr->age = age;
		ptr->owner = p_owner;

		free(p_name);
		free(p_owner);
		return (ptr);
	}
	free(p_name);
	free(p_owner);
	return (NULL);
}
