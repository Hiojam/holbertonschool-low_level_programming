#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to upper
 *
 * @s: *char
 * Return: *char
 */
char *string_toupper(char *s)
{
	int i = 0;

	for (; s[i]; i++)
	{
		if (s[i] >= 98 && s[i] <= 122)
			s[i] -= 32;
	}
	return (s);
}
