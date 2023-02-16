#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 *
 * @n: void
 */
void jack_bauer(void)
{
	int minute;

	for (minute = 0; minute < 1440; minute++)
	{
		_putchar(minute % 10 + '0');
	}
}
