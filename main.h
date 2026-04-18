#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>

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
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int print_binary(va_list args);

#endif
