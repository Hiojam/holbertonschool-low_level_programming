#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: *char
 * Return: the converted number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, i = 0, digit;

	if (b == NULL)
		return (0);

	for (; b[i]; i++)
	{
		if ((b[i] == '0') || (b[i] == '1'))
		{
			digit = b[i] - '0';
			decimal = decimal * 2 + digit;
		}
		else
			return (0);
	}
	return (decimal);
}
