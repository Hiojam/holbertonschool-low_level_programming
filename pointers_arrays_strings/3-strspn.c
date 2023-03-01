#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: *char
 * @accept: char
 * Return: Num of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int acceptLen = 0, matches = 0;

	for (; accept[acceptLen]; acceptLen++)
		;

	for (; s[i]; i++)
	{
		if (s[i] == accept[i])
			matches++;

		if (matches == acceptLen)
			break;
	}

	return (i);
}
