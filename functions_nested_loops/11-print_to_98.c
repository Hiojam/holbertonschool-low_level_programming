#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 *
 * @n: int
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n++)
		{
			printf("%d", n);
			_putchar(',');
			_putchar(' ');
		}
		printf("%d", 98);
		return;
	}

	for (; n < 98 ; n++)
	{
		printf("%d", n);
		_putchar(',');
		_putchar(' ');
	}
	printf("%d\n", 98);
}
