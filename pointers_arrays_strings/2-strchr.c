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
	int oc = NULL;

	for (; s[i]; i++)
		if (s[i] == c)
			oc = i;

	if (oc == NULL)
		return NULL;

	return (s[oc]);
}
