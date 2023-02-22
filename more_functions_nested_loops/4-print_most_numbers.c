#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num == 2 || num == 4)
			continue;

		printf("%d", num);
	}
}
