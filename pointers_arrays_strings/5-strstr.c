#include "main.h"

int get_firstsegment(char *s);

/**
 * *_strstr - Locates a substring
 *
 * @haystack: *char
 * @needle: *char
 * Return: Pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, max = 0, ocurrence = 0;
	int z = 0;
	int found = 0;

	for (; needle[max]; max++)
		;

	if (needle[0] == '\0')
		return (haystack);

	for (; haystack[i] != '\0'; i++)
	{
		for (z = 0; needle[z]; z++)
		{
			if (haystack[i] == needle[z])
			{
				ocurrence++;
				found = 1;
				if (ocurrence == max)
					return (haystack + (i - (ocurrence - 1)));
			}
		}
		if (found == 0)
			ocurrence = 0;
		found = 0;
	}

	return (0);
}

/**
 * get_firstsegment - Get first segment of a *char
 *
 * @s: *char
 * Return: int
 */
int get_firstsegment(char *s)
{
	int i = 0, x = 0;
	char a[] = {' ', '	', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (; s[i]; i++)
		for (x = 0; a[x]; x++)
			if (s[i] == a[x])
				return (i);

	return (0);
}
