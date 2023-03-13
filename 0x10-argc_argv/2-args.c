#include <stdio.h>

/**
 * main - Prints all arguments it receives
 *
 * @argc: int
 * @argv: *char
 * Return: Success. Always (0).
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
