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
	char *s;

	if (separator == NULL)
		separator = "";

	va_start(args, n);

	for (; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i + 1 != n)
			printf("%s", separator);
	}

	putchar('\n');

	va_end(args);
}
