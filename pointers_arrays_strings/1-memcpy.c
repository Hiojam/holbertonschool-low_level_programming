#include "main.h"

/**
 * *_memcpy - Copies a memory area
 *
 * @dest: *char
 * @src: *char
 * @n: uns int
 * Return: Pointer to dest
 */
char *_memset(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
