#include "main.h"

/**
 * leet - Encodes a string into 1337
 *
 * @s: *char
 * Return: *char
 */
char *leet(char *s)
{
	int i = 0, z = 0;
	char letters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char replace[] = {'4', '3', '0', '7', '1'};

	for (; s[i]; i++)
	{
		for (z = 0; letters[z]; z++)
		{
			if (letters[z] == s[i])
				s[i] = replace[z / 2];
		}
	}
	return (s);
}
