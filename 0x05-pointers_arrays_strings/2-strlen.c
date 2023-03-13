#include "main.h"

/**
 * _strlen - Returns the length of a string
 *
 * @s: *char
 * Return: int
 */
int _strlen(char *s)
{
	int count = 0;

	for (; *s; s++)
		count++;

	return (count);
}
