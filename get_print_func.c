#include "main.h"

/**
 * get_print_func - selects the correct function to perform the printing
 * @specifier: the format specifier character passed as an argument
 *
 * Return: a pointer to the function that corresponds to the specifier,
 * or NULL if no match is found.
 */
int (*get_print_func(char specifier))(va_list)
{
	specifier_handler_t match[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}
	};
	int i = 0;

	while (match[i].handler != NULL)
	{
		if (match[i].specifier == specifier)
			return (match[i].handler);
		i++;
	}

	return (NULL);
}
