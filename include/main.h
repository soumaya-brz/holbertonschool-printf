#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/* _printf */
/**
 * _printf - prints formatted output to stdout
 * @format: format string containing characters and conversion specifiers
 *
 * Description:
 * Supports %c, %s, and %%.
 *
 * Return: the number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...);

/* utility functions */
/**
 * _putchar - writes a single character to stdout
 * @c: character to print
 *
 * Return: 1 on success
 */
int _putchar(char c);

/**
 * print_char - prints a single character from va_list
 * @args: va_list containing the character
 *
 * Return: 1 (number of characters printed)
 */
int print_char(va_list args);

/**
 * print_string - prints a string from va_list
 * @args: va_list containing the string
 *
 * Description:
 * Prints "(null)" if the string is NULL.
 *
 * Return: number of characters printed
 */
int print_string(va_list args);

/**
 * print_percent - prints a percent sign '%'
 *
 * Return: 1 (number of characters printed)
 */
int print_percent(void);

/* additional prototypes */
int print_int(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex(va_list args, int uppercase);
int print_pointer(va_list args);

#endif /* MAIN_H */
