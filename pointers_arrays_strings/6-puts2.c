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
	int count = 0;

	for (; *str; str++)
	{
		if (count % 2 == 0)
			printf("%c", *str);

		count++;
	}
	putchar('\n');
}
