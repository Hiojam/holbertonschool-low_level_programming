#include "main.h"

/**
 * print_triangle - Draws a triangle
 *
 * @n: int
 * Return: void
 */
void print_triangle(int n)
{
	int times;
	int z;
	int y;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (times = 0; times < n; times++)
	{
		for (z = 1; z < (n - times); z++)
		{
			_putchar(' ');
		}
		for (y = 0; y <= times; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
