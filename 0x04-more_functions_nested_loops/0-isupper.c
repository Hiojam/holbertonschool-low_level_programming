#include "main.h"
#include <ctype.h>

/**
 * _isupper - Checks for an uppercase char
 *
 * @n: int
 * Return: 1: is uppercase. 0: is lowercase
 */
int _isupper(int n)
{
	if (isupper(n))
		return (1);

	return (0);
}
