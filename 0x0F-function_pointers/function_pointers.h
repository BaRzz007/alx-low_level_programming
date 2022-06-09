#include <stddef.h>
#ifndef FUNCTIONS
#define FUNCTIONS
int _putchar(char);
void print_name(char *, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
