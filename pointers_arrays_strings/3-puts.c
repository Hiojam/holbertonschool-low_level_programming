#include "main.h"

/**
 * _puts - Prints a string
 *
 * @str: *char
 * Return: void
 */
void _puts(char *str)
{
	for (; *str; str++)
		_putchar(*str);

	_putchar('\n');
}
