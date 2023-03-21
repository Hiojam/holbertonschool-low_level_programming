#include "variadic_functions.h"

/**
 * sum_them_all - Adds numbers
 *
 * @n: const unsigned int
 * Return: The sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int resul = 0;
	va_list args;
	unsigned int i = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (; i < n; i++)
		resul += va_arg(args, int);

	va_end(args);	
	return (resul);
}
