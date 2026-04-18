#include "main.h"

/**
 * print_binary - prints an unsigned int in binary
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int print_binary(va_list args)
{
	unsigned int n;
	unsigned int divisor;
	int count;

	n = va_arg(args, unsigned int);
	divisor = 2147483648;
	count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while ((n & divisor) == 0)
		divisor >>= 1;

	while (divisor > 0)
	{
		if (n & divisor)
			count += _putchar('1');
		else
			count += _putchar('0');
		divisor >>= 1;
	}

	return (count);
}
