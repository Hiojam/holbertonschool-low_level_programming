#include "main.h"

/**
 * init_dog - Initializes a variable of type struct dog
 *
 * @n: struct dog *d, char *name, float age, char *owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL) return;

	d = {name, age, owner};
}
