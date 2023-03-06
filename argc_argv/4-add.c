#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Adds positive numbers
 *
 * @argc: int
 * @argv: *char
 * Return: 0: Success. 1: Error.
 */
int main(int argc, char *argv[])
{
	int total = 0, i = 1;

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}

	for (; i < argc; i++)
	{
		if (atoi(argv[i]) != 0)
			total += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", total);
	return (0);
}
