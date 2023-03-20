#include "dog.h"

/**
 * print_dog - Prints a struct dog
 *
 * @d: struct *dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f.1\nOwner: %s", d->name, d->age, d->owner);
}
