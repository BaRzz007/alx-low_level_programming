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
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
