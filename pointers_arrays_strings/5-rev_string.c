#include "main.h"

/**
 * rev_string - Reverse a string
 *
 * @s: *char
 * Return: void
 */
void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	char tmp;

	for (; *s; s++)
		b++;

	b--;

	while (a < b)
	{
		tmp = s[a];
		s[a] = s[b];
		s[b] = tmp;
		a++, b--;
	}
}
