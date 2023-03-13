#include "main.h"

/**
 * print_numbers - Prints numbers from 1 to 10
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i % 10 + '0');
	}
	_putchar('\n');
}
