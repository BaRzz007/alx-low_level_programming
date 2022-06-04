#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct to declare properties of dog
 * @name: name of dog
 * @owner: name of owner
 * @age: age of dog
 */
struct dog
{
	char *name, *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif