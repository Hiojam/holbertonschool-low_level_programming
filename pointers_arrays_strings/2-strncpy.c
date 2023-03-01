#include "main.h"

/**
 * *_strncpy - Copy the src string to the dest string
 *
 * @dest: *char
 * @src: *char
 * @n: int
 * Return: Pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
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

	return (dest);
}
