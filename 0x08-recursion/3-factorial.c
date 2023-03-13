#include "main.h"

/**
 * factorial - Factorial of a given number
 *
 * @n: int n
 * Return: The factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
