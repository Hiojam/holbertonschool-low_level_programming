#include "main.h"

/**
 * reverse_array - Reverses the content of an array
 *
 * @a: *int
 * @n: int
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int b[100];

	for (i = n; i >= 0; i--)
		b[(n - 1) - i] = a[i];

	a = b;
}
