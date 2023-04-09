#include "main.h"

/**
 * get_bit - gets the value of a bit
 *
 * @n: unsigned long int
 * @index: unsigned int
 * Return: returns the value of a bit at a given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
