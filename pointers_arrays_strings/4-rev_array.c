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
	int prev;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		prev = a[i];
		a[i] = a[(n - 1) - i];
		a[(n - 1) - i] = prev;
	}
}
