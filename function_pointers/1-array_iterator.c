#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a param
 *
 * @array: *int
 * @size: size_t
 * @action: function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!array || !action)
		return;

	for (; i < size; i++)
		action(array[i]);
}
