#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it
 *
 * @argc: int
 * @argv: *char
 * Return: Success. Always (0).
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d", argc - 1);
	return (0);
}
