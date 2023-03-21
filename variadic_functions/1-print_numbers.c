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
	va_list args;
	unsigned int i = 0;

	if (separator == NULL)
		separator = "";

	va_start(args, n);

	for (; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i + 1 != n)
			printf("%s", separator);
	}

	putchar('\n');

	va_end(args);
}
