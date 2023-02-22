#include "main.h"

/**
 * print_line - Draws a straight line
 *
 * @n: int
 * Return: void
 */
void print_line(int n)
{
	int times;

	if (n <= 0)
	{
		_putchar('\n');
		return ();
	}

	for (times = 0; times < n; times++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
