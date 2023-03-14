#include "main.h"

/**
 * *_calloc - Allocates memory for an array
 *
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(size * nmemb);

	if (array == NULL)
		return (NULL);

	for (; i < (size * nmemb); i++)
		array[i] = 0;

	return (array);
}
