/**
 * print_number - prints a number
 * @n: number to print
 * Return: void
 */
void print_number(int n)
{

	if (n < 0)
	{
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	if (n / 10)
		printnumber(n / 10);

	_putchar(n % 10 + '0');
}
