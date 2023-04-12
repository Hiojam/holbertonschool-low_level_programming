#include "main.h"

/**
 * checkArguments - Checks wether the arguments are valid.
 *
 * @argc: int
 * @argv: char*[]
 * Return: int*
 */
int *checkArguments(int argc, char *argv[])
{
	int oFrom, oTo;
	int *arr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	oFrom = open(argv[1], O_RDONLY);
	if (oFrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	oTo = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (oTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	arr = malloc(2 * sizeof(int));
	if (arr == NULL)
		exit(100);

	arr[0] = oFrom;
	arr[1] = oTo;

	return (arr);
}

/**
 * main - main entry.
 *
 * @argc: int
 * @argv: char*[]
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int oFrom, oTo;
	int *a;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	a = checkArguments(argc, argv);
	oFrom = a[0];
	oTo = a[1];

	while ((bytes_read = read(oFrom, buffer, 1024)) > 0)
	{
		bytes_written = write(oTo, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Short write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(oFrom) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can´t close fd\n");
		exit(100);
	}
	if (close(oTo) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		exit(100);
	}

	return (0);
}
