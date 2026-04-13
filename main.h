#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * struct specifier_handler - maps a format specifier to its handler function
 * @specifier: the format specifier character
 * @handler: pointer to the function that handles the specifier
 */
typedef struct specifier_handler
{
	char specifier;
	int (*handler)(va_list);
} specifier_handler_t;

int _putchar(char character);
int _printf(const char *format, ...);
int (*get_print_func(char specifier))(va_list);

#endif
