#include "variadic_functions.h"

/**
 * print_numbers - Print numbers
 *
 * @separator: const *char
 * @n: const unsigned int
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int resul = 0;
	va_list args;
	unsigned int i = 0;

	if (n == 0)
		return;

	if (separator == NULL)
		return;

	va_start(args, n);

	for (; i < n; i++)
		printf("%d%s", va_arg(args, int));

	_putchar('\n');

	va_end(args);
	return (resul);
}
