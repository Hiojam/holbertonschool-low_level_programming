#include "main.h"

/**
 * *_strncat - Appends the src string to the dest string
 *
 * @dest: *char
 * @src: *char
 * @n: int
 * Return: Pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int destLen = 0;

	for (; dest[destLen]; destLen++)
		;

	while (src[i])
	{
		if (i > n) break;

		if (src[i] != '\0')
			dest[destLen + i] = src[i];
		i++;
	}
	dest[destLen + i] = '\0';

	return (dest);
}
