#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 *
 * @n: *char
 * Return: void
 */
void _puts_recursion(char *n)
{
	unsigned int i = 0;

	if (n[i])
	{
		_putchar(n[i]);
		i++;
		_puts_recursion(n + i);
	}
	else
		_putchar('\n');
	
}
