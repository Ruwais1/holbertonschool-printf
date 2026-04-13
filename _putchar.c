#include "main.h"

/**
 * _putchar - writes a single character to standard output
 * @character: character to be written
 *
 * Return: 1 on success, or -1 on failure
 */
int _putchar(char character)
{
	return (write(1, &character, 1));
}
