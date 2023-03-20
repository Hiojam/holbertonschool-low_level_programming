#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints a struct dog
 *
 * @d: struct *dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	char *name;
	char *owner;
	float age;

	if (d == NULL)
		return;

	name = d->name;
	owner = d->owner;
	age = d->age;

	if (name == NULL)
		name = "(nil)";

	if (owner == NULL)
		owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", name, age, owner);
}
