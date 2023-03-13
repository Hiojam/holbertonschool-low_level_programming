#include "main.h"

/**
 * *str_concat - Concatenates two strings.
 *
 * @s1: *char
 * @s2: *char
 * Return: Pointer to a new concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *cpy;
	unsigned int s1Size = 0, s2Size = 0, i = 0, z = 0;

	for (; s1[s1Size]; s1Size++)
		;

	for (; s2[s2Size]; s2Size++)
		;

	cpy = malloc(sizeof(char) * ((s1Size + s2Size) + 1));

	if (cpy == NULL)
		return (NULL);

	for (; s1[i] != '\0'; i++)
		cpy[i] = s1[i];

	for (; s2[z]; z++)
		cpy[i + z] = s2[z];

	cpy[i + z] = '\0';

	return (cpy);
}
