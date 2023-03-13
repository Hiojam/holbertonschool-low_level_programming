#include "main.h"

/**
 * print_alphabet - Prints the alphabet
 *
 * Return: Void
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
