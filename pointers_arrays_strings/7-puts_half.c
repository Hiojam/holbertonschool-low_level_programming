#include "main.h"
#include <string.h>

/**
 * puts_half - Prints half of a string
 *
 * @str: *char
 * Return: void
 */
void puts_half(char *str)
{
	int len = strlen(str) - 1;
	int half = len / 2;
	int i;

	if (len % 2 != 0)
		half = (len - 1) / 2;

	for (i = half; i < len; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
