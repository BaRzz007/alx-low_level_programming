#include <stddef.h>
#ifndef FUNCTIONS
#define FUNCTIONS
int _putchar(char);
void print_name(char *, void (*f)(char *));
void array_iterator(int *arr, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif
