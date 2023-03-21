#include "variadic_functions.h"

void print_c(va_list);
void print_i(va_list);
void print_f(va_list);
void print_s(va_list);

/**
 * print_all - Prints anything
 *
 * @format: const *char
 * Return: void
 */
void print_all(const char * const format, ...)
{
	format_t s[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_s},
		{'\0', '\0'}
	};
	va_list args;
	unsigned int i = 0, z;
	char *separator = ", ";

	va_start(args, format);

	while (format && format[i])
	{
		z = 0;

		while (s[z].symbol != '\0')
		{
			if (s[z].symbol == format[i])
			{
				s[z].f(args);
				if (format[i + 1])
					printf("%s", separator);
				break;
			}
			z++;
		}
		i++;
	}

	putchar('\n');

	va_end(args);
}

/**
 * print_c - Prints a char
 *
 * @l: va_list
 * Return: void
 */
void print_c(va_list l)
{
	printf("%c", va_arg(l, int));
}

/**
 * print_i - Prints an integer
 *
 * @l: va_list
 * Return: void
 */
void print_i(va_list l)
{
  printf("%d", va_arg(l, int));
}

/**
 * print_f - Prints a float
 *
 * @l: va_list
 * Return: void
 */
void print_f(va_list l)
{
  printf("%f", va_arg(l, double));
}

/**
 * print_s - Prints a string
 *
 * @l: va_list
 * Return: void
 */
void print_s(va_list l)
{
	char *s = va_arg(l, char *);

	if (s == NULL)
		s = "(nil)";

  printf("%s", s);
}
