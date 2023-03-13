#include "main.h"

int sq(int count, int sqroot, int n);

/**
 * _sqrt_recursion - Gets the natural square root of a given number
 *
 * @n: int n
 * Return: Returns the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);

	if (n == 0)
		return (1);

	return (sq(1, 1, n));
}

/**
 * sq - Does the math for the square root.
 *
 * @count: int
 * @sqroot: int
 * @n: int
 * Return: The square root of a num
 */
int sq(int count, int sqroot, int n)
{
	if (sqroot > n)
		return (count - 1);

	count++;
	sqroot = count * count;
	return (sq(count, sqroot, n));
}
