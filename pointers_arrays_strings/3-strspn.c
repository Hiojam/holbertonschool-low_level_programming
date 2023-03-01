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
	unsigned int i = 0, matches = 0;
	int z = 0;

	for (; s[i]; i++)
	{
		for (z = 0; accept[z]; z++)
			if (s[i] == accept[z])
				matches++;
	}

	return (matches);
}
