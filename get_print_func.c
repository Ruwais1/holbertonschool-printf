#include "main.h"

/**
 * get_print_func - selects the correct function to perform the printing
 * @s: the format specifier character (c, s, or %)
 *
 * Return: a pointer to the function that corresponds to the specifier,
 * or NULL if no match is found.
 */
int (*get_print_func(char s))(va_list)
{
	convert_match match[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};
	int i = 0;

	while (match[i].id != NULL)
	{
		if (match[i].id[0] == s)
		{
			return (match[i].f);
		}
		i++;
	}

	return (NULL);
}
