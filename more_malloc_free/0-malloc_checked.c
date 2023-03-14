#include "main.h"

/**
 * *malloc_checked - Allocates memory using malloc
 *
 * @b: unsigned int
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	char *s = malloc(b);

	if (s == NULL)
	{
		exit(98);
		return (NULL);
	}

	return (s);
}
