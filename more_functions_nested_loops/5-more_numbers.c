#include "main.h"

void printnumber(int);

/**
 * more_numbers - Prints the numbers from 0 to 14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int times;
	int num;

	for (times = 0; times <= 10; times++)
	{
		for (num = 0; num < 15; num++)
		{
			printnumber(num);
		}
		_putchar('\n');
	}
}

/**
 * printnumber - prints a number
 * @n: number to print
 */
void printnumber(int n)
{

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n / 10)
		printnumber(n / 10);

	_putchar(n % 10 + '0');
}
