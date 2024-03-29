#ifndef DOG_H
#define DOG_H
#include <stdlib.h>

/**
 * struct dog - Dog
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

typedef struct dog dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
