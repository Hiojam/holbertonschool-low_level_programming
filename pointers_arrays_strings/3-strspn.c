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

	for (; accept[i]; i++)
		;

	return (i + 1);
}
