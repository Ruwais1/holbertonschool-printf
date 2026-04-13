#include "main.h"

/**
 * _printf - produces output according to a format string
 * @format: string containing ordinary characters and format specifiers
 *
 * Return: total number of printed characters, or -1 on error
 */
int _printf(const char *format, ...)
{
	va_list argument_list;
	int format_index;
	int printed_characters_count;
	int (*specifier_handler)(va_list);

	if (format == NULL)
		return (-1);

	va_start(argument_list, format);

	format_index = 0;
	printed_characters_count = 0;

	while (format[format_index] != '\0')
	{
		if (format[format_index] != '%')
		{
			if (_putchar(format[format_index]) == -1)
			{
				va_end(argument_list);
				return (-1);
			}
			printed_characters_count++;
		}
		else
		{
			format_index++;

			if (format[format_index] == '\0')
			{
				va_end(argument_list);
				return (-1);
			}

			specifier_handler = get_print_func(format[format_index]);

			if (specifier_handler != NULL)
			{
				printed_characters_count += specifier_handler(argument_list);
			}
			else
			{
				if (_putchar('%') == -1 || _putchar(format[format_index]) == -1)
				{
					va_end(argument_list);
					return (-1);
				}
				printed_characters_count += 2;
			}
		}

		format_index++;
	}

	va_end(argument_list);

	return (printed_characters_count);
}
