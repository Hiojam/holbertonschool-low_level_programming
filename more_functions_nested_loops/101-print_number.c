#include "main.h"
#include <limits.h>

/**
 * print_number - prints a number
 * @n: number to print
 * Return: void
 */
void print_number(int n)
{

	if (n < 0)
	{
		if (n != INT_MIN)
		{
			_putchar('-');
			n = -n;
		}
		else
		{
			_putchar(-(n % 10) + '0');
		}
	}

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar(n % 10 + '0');
}
