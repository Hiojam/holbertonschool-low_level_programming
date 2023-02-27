#include "main.h"

/**
 * print_rev - Prints a string in reverse
 *
 * @s: *char
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	for (; *s; s++)
		len++;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
