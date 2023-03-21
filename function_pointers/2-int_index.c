#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 *
 * @array: *int
 * @size: int
 * @action: function (int)
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	if (!array || !cmp)
		return (-1);

	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);

	return (-1);
}
