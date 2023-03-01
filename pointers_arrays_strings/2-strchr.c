#include "main.h"

/**
 * *_strchr - Locates a char in a string
 *
 * @s: *char
 * @c: char
 * Return: Pointer to the first occurence
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; s[i] != '\0'; i++)
		if (s[i] == c)
			return (s + i);

	return (0);
}
