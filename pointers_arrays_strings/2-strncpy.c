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
	int i;

	for (i = 0; i < n; && src[i] != 0: i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
