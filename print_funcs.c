#include "main.h"

/**
 * print_char - prints a character from va_list
 * @args: list of arguments
 *
 * Return: number of characters printed (always 1)
 */
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * print_string - prints a string from va_list
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * print_percent - prints the percent symbol
 * @args: list of arguments (unused)
 *
 * Return: number of characters printed (always 1)
 */
int print_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
