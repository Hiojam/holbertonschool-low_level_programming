#include "main.h"

/**
 * print_square - Draws a square
 *
 * @n: int
 * Return: void
 */
void print_square(int n)
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
		for (z = 0; z < n; z++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
