#include "main.h"

/**
 * *_strcpy - Copies the string pointed to by src
 *
 * @dest: *char
 * @src: *char
 * Return: Pointer to destiny
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		if (src[i] != '\0')
			dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
