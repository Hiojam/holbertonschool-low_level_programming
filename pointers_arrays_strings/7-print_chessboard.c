#include "main.h"

/**
 * print_chessboard - Prints the chessboard
 *
 * @a: *char
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, x;

	for (; a[i][7]; i++)
	{
		for (x = 0; x < 8; x++)
			_putchar(a[i][x]);

		_putchar('\n');
	}
}
