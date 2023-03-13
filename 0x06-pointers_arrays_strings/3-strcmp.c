#include "main.h"

/**
 * _strcmp - Compares two strings
 *
 * @s1: *char
 * @s2: *char
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int s1Val = 0, s2Val = 0;
	int i = 0;

	for (; s1[i]; i++)
	{
		s1Val = s1[i];
		s2Val = s2[i];

		if (s1Val > s2Val)
			return (s1Val - s2Val);
		else if (s1Val < s2Val)
			return (s1Val - s2Val);
	}

	return (0);
}
