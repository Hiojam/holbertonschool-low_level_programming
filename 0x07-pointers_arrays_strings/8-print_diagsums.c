#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 *
 * @a: *char
 * @size: int
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	long int sum = 0, sizem = size * size;

	for (; i < sizem; i += size + 1)
		sum += a[i];

	printf("%li, ", sum);
	sum = 0;

	for (i = size - 1; i <= sizem - size + 1; i += size - 1)
		sum += a[i];

	printf("%li\n", sum);
}
