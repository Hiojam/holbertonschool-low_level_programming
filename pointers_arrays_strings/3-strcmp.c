#include "main.h"

int *getASCIIValue(char *array);

/**
 * _strcmp - Compares two strings
 *
 * @s1: *char
 * @s2: *char
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int s1Len = getASCIIValue(s1), s2Len = getASCIIValue(s2);

	if (s1Len > s2Len)
		return (s1Len - s2Len);
	else if (s1Len < s2Len)
		return (-(s1Len - s2Len));

	return (0);
}

/**
 * getASCIIValue - Get the ascii value of a *char
 *
 * @array: *char
 * Return: int
 */
int *getASCIIValue(char *array)
{
	int i, ascii;
	int result[100];

	for (i = 0; array[i]; i++)
	{
		ascii = (int) array[i];
		result[i] = ascii;
	}

	return (result);
}
