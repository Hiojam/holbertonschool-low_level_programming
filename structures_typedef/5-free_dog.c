#include "dog.h"

/**
 * free_dog - Frees dogs
 *
 * @d: dog_t
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
