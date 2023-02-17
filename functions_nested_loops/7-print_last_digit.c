#include "main.h"

void printnumber(int);

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: int
 * Return: The last digit
 */
int print_last_digit(int n)
{
	_putchar(n);
	return (n % 10);
}

/**
 * printnumber - prints a number
 * @n: number to print
 */
void printnumber(int n)
{

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n / 10)
		printnumber(n / 10);

	_putchar(n % 10 + '0');
}
