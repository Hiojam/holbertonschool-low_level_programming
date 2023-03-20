#include "dog.h"

/**
 * str_dup - Duplicates a string.
 *
 * @s: *char
 * Return: Pointer to the new String.
 */
char *str_dup(char *s)
{
	char *newS;
	int sLen = 0, i = 0;

	for (; s[sLen]; sLen++)
		;

	newS = malloc((sizeof(char) * sLen) + 1);
	if (newS == NULL)
		return (NULL);

	for (; s[i]; i++)
		newS[i] = s[i];

	newS[i] = '\0';
	return (newS);
}

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

	dog->name = str_dup(name);

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->age = age;
	dog->owner = str_dup(owner);

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	return (dog);
}
