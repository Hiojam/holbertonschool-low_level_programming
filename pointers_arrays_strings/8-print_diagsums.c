#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 *
 * @a: *char
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0, sum1, sum2;

	for (; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
