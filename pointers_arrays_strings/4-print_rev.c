#include "main.h"
#include <string.h>

/**
 * print_rev - Prints a string in reverse
 *
 * @s: *char
 * Return: void
 */
void print_rev(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len; i >= 0; i--)
		printf("%c", s[i]);

	_putchar('\n');
}
