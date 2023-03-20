#include "dog.h"

/**
 * *new_dog - Creates a new dog
 *
 * @name: *char
 * @age: float
 * @owner: *char
 * Return: The dog or Null if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	if (!name || !owner)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
