#include "main.h"

int get_firstsegment(char *s);

/**
 * *_strpbrk - Searches a string for any of a set of bytes
 *
 * @s: *char
 * @accept: *char
 * Return: Pointer to s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, max = get_firstsegment(s);
	int z = 0;

	for (; s[i] < max; i++)
	{
		for (z = 0; accept[z]; z++)
		{
			if (s[i] == accept[z])
				return (s + i);
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
