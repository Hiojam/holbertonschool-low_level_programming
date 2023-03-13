#include "main.h"

/**
 * *_strdup - Returns a pointer to a newly allocated space in memory
 *
 * @str: *char
 * Return: Pointer to a new string which is a dup of the string str
 */
char *_strdup(char *str)
{
	char *cpy;
	int i = 0;

	if (str == NULL)
		return (NULL);

	for (; str[i]; i++)
		;

	cpy = malloc(sizeof(char) * i + 1);

	if (cpy == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		cpy[i] = str[i];
	cpy[i] = '\0';

	return (cpy);
}
