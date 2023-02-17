#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int rows;
	int lines;
	int multiplier = 0;
	int prevNum = 0;

	for (rows = 0; rows <= 9; rows++)
	{
		for (lines = 0; lines < 10; lines++)
		{
			if (lines == 0)
			{
				_putchar('0');
				_putchar(',');
				_putchar(' ');
				continue;
			}
			prevNum = prevNum + rows;
			printf("%d", prevNum);

			if (lines != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		prevNum = 0;
		_putchar('\n');

	}
}
