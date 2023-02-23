#include "main.h"

/**
 * print_number - prints a number
 * @n: number to print
 * Return: void
 */
void print_number(int n)
{

	if (n < 0)
	{
		n = -n;
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
