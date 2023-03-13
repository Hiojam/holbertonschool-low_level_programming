#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Adds positive numbers
 *
 * @argc: int
 * @argv: *char
 * Return: 0: Success. 1: Error.
 */
int main(int argc, char *argv[])
{
	int total = 0, i = 1, x = 0;

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}

	for (; i < argc; i++)
	{
		for (x = 0; argv[i][x]; x++)
			if (!isdigit(argv[i][x]))
			{
				printf("Error\n");
				return (1);
			}

		total += atoi(argv[i]);
	}

	printf("%d\n", total);
	return (0);
}
