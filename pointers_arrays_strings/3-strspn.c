#include "main.h"

int get_firstsegment(char *s);

/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: *char
 * @accept: char
 * Return: Num of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, matches = 0, max = get_firstsegment(s);
	int z = 0;

	for (; s[i]; i++)
	{
		if (i == max)
			return (matches);

		for (z = 0; accept[z]; z++)
			if (s[i] == accept[z])
				matches++;
	}

	return (matches);
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
			if (s[x] == s[i])
				return (i);

	return (0);
}
