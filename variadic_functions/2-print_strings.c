#include "variadic_functions.h"

/**
 * print_strings - Print strings
 *
 * @separator: const *char
 * @n: const unsigned int
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	if (separator == NULL)
		separator = "";

	va_start(args, n);

	for (; i < n; i++)
	{
		if (va_arg(args, char *) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(args, char *));

		if (i + 1 != n)
			printf("%s", separator);
	}

	putchar('\n');

	va_end(args);
}
