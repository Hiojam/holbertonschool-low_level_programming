#include "main.h"

/**
 * *_strcat - Appends the src string to the dest string
 *
 * @dest: *char
 * @src: *char
 * Return: Pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int destLen = 0;

	for (; dest[destLen]; destLen++)
		;

	while (src[i])
	{
		if (src[i] != '\0')
			dest[destLen + i] = src[i];
		i++;
	}
	dest[destLen + i] = '\0';

	return (dest);
}
