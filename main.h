#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * struct printer - structure associating a specifier with a printing function
 * @symbol: format specifier (ex: 'c', 's', '%')
 * @print: pointer to function that handles the specifier
 */
typedef struct printer
{
	char symbol;
	int (*print)(va_list);
} printer_t;

int _putchar(char c);
int _printf(const char *format, ...);

int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

#endif
