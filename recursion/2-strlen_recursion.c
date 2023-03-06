#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 *
 * @s: char *s
 * Return: Length of the given string
 */
int _strlen_recursion(char *s)
{
	return (s[0] ? 1 + _strlen_recursion(s + 1) : 0);
}
