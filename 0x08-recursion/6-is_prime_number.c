#include "main.h"

int prime(int num, int i);

/**
 * is_prime_number - Checks if the param is a prime number
 *
 * @n: int n
 * Return: Returns 1 if the input int is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	int a;

	if (n < 0 || n == 0 || n == 1)
		return (0);

	a = prime(n, n / 2);

	return (a);
}

/**
 * prime - Counts the prime num
 *
 * @num: int
 * @i: int
 * Return: The prime boolean.
 */
int prime(int num, int i)
{
	if (i == 1)
		return (1);

	if (num % i == 0)
		return (0);

	return (prime(num, i - 1));
}
