#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 *                 of integers using the
 *                 Linear search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1.
*/
int linear_search(int *array, size_t size, int value)
{
    unsigned int i = 0;

    if (!array)
        return (-1);

    for (; i < size; i++)
    {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }
    return (-1);
}