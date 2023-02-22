#include <stdio.h>

/*
 * main - Main function 
 */
int main(void)
{
	int i;

	for (i = i; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		_putchar(' ');
	}
	_putchar('\n');


	return (0);
}
