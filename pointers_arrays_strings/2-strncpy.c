#include "main.h"

/**
 * *_strncat - Copy the src string to the dest string
 *
 * @dest: *char
 * @src: *char
 * @n: int
 * Return: Pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i])
	{
		if (i + 1 > n)
			break;

		if (src[i] != '\0')
			dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
