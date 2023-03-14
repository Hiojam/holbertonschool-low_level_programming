#include "main.h"

/**
 * *array_range - creates an array of integers.
 *
 * @min: int
 * @max: int
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *list;
	int i = min;

	if (min > max)
		return (NULL);

	list = malloc(sizeof(int) * ((max - min) + 1));

	if (list == NULL)
		return (NULL);

	for (; i <= max; i++)
		list[i - min] = i;

	return (list);
}
