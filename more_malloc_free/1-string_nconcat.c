#include "main.h"

/**
 * *string_nconcat - Concatenates two strings
 *
 * @s1: *char
 * @s2: *char
 * @n: unsigned int
 * Return: A pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newStr;
	unsigned int s1Len = 0, s2Len = 0;
	int i = 0, z = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (; s1[s1Len]; s1Len++)
		;

	for (; s2[s2Len]; s2Len++)
		;

	if (n >= s2Len)
		n = s2Len;

	newStr = malloc((s1Len + s2Len) + 1);
	if (newStr == NULL)
		return (NULL);

	for (; i < s1Len; i++)
		newStr[i] = s1[i];

	for (; z < n; z++)
		newStr[i + z] = s2[z];

	newStr[i + z] = '\0';
	return (newStr);
}
