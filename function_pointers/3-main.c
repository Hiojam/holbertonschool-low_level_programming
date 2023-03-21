#include "3-calc.h"

/**
 * main - Main function
 *
 * @argc: int
 * @argv: **char
 * Return: 0 or -1.
 */
int main(int argc, char **argv)
{
	char *operator;
	int num1, num2, resul;
	int (*func)(int,  int);

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	func = get_op_func(operator);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((operator[0] == '%' || operator[0] == '/') && (num1 == 0 || num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	resul = func(num1, num2);
	printf("%d\n", resul);
	return (0);
}
