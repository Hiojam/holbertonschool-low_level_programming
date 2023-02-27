#include "main.h"
#include <string.h>

/**
 * puts2 - Prints every other char of a string
 *
 * @str: *char
 * Return: void
 */
void puts2(char *str)
{
	for (; *str; str++)
	{
		if (*str % 2 == 0)
			printf("%c", *str);
	}
	putchar('\n');
}
