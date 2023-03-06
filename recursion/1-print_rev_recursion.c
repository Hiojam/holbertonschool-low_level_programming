#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 *
 * @s: char *s
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	unsigned int i = 0;

	if (s[i])
	{
		_print_rev_recursion(s + i + 1);
		putchar(s[i]);
		i++;
	}
}
