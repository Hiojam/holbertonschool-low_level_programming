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
		dest[i] = src[i];
		i++; 
	}
	return (dest);
}
