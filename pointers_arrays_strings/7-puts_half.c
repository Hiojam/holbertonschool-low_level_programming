#include "main.h"

/**
 * puts_half - Prints half of a string
 *
 * @str: *char
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int half = 0;
	int i = 0;

	while (str[i++])
		len++;

	half = (len / 2) + 1;

	if (len % 2 == 0)
		half = (len + 1) / 2;

	for (i = half; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
