#include "main.h"
#include <string.h>

/**
 * rev_string - Reverse a string
 *
 * @s: *char
 * Return: void
 */
void rev_string(char *s)
{
	int a = 0;
	int b = (strlen(s) - 1);
	char tmp;

	while (a < b)
	{
		tmp = s[a];
		s[a] = s[b];
		s[b] = tmp;
		a++, b--;
	}
}
