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
	unsigned int i = 0;
	int z = 0;

	for (; needle[i] != '\0'; i++)
	{
		for (z = 0; haystack[z]; z++)
		{
			if (needle[i] == haystack[z])
				return (needle + i);
		}
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
