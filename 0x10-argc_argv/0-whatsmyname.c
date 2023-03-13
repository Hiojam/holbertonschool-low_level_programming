#include <stdio.h>

/**
 * main - Prints its name, followed by a new line
 *
 * @argc: int
 * @argv: *char
 * Return: Success. Always (0).
 */
int main(int argc, char *argv[])
{
	if (argc >= 0)
		printf("%s\n", argv[0]);
	return (0);
}
