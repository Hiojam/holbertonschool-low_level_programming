#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 *
 * @n: int
 */
void print_to_98(int n)
{
	for (; n < 98 ; n++)
	{
		printf("%d", n);
		_putchar(',');
		_putchar(' ');
	}
	printf("%d\n", 98);
}
