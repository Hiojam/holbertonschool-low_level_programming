#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: int
 * Return: The last digit
 */
int print_last_digit(int n)
{
	int resul = n % 100;
	return (resul % 10);
}
