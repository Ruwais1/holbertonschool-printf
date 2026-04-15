# _printf

## Description

This repository contains a simple custom implementation of the C standard library `printf` function.

The project provides a function called `_printf` that prints formatted output to the standard output.
It supports a limited set of format specifiers and is built using multiple helper files.

## Supported format specifiers

* `%c` : prints a character
* `%s` : prints a string
* `%%` : prints a percent sign
* `%d / %i` : prints a signed  integer

## Files

* `_printf.c` : main function
* `_putchar.c` : outputs a character
* `get_print_func.c` : selects the correct handler
* `print_funcs.c` : handles characters and strings
* `print_numbers.c` : handles integers
* `main.h` : header file
* `man_3_printf` : manual page

## Authors

* Fahad Almidaj
* Alanoud Aloraydi

