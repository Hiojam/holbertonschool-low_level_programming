#include "main.h"

/**
 * flip_bits - Flip a number of bits
 *
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: returns the number of bits to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		count += xor & 1;
		xor >>= 1;
	}
	return (count);
}
