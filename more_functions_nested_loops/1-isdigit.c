#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Checks for a digit
 *
 * @n: int
 * Return: 1: is a digit. 0: is not a digit
 */
int _isdigit(int n)
{
	if (isdigit(n))
		return (1);

	return (0);
}
