#include "main.h"

/**
 * print_diagonal - Draws a diagonal line
 *
 * @n: int
 * Return: void
 */
void print_diagonal(int n)
{
	int times;
	int z;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (times = 0; times < n; times++)
	{
		for (z = 0; z < times; z++)
		{
			_putchar(' ');
		}
		_putchar('\');
		_putchar('\n');
	}
}
