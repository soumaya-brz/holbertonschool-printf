#ifndef MAIN_H
#define MAIN_H

/**
 * main.h - prototypes and includes for _printf project
 */

#include <stdarg.h>  /* va_list, va_start, va_arg */
#include <stddef.h>  /* size_t, NULL */
#include <stdlib.h>  /* malloc, free */
#include <unistd.h>  /* write */
#include <stdint.h>  /* uintptr_t */

/**
 * struct printer - structure associating a specifier with a printing function
 * @symbol: format specifier (ex: 'c', 's', '%', 'd', etc)
 * @print: pointer to function that handles the specifier
 */
typedef struct printer
{
	char symbol;
	int (*print)(va_list);
} printer_t;

/* main function */
int _printf(const char *format, ...);

/* low-level output */
int _putchar(char c);

/* handlers for specifiers */
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

int print_int(va_list args);                 /* %d / %i */
int print_unsigned(va_list args);            /* %u */
int print_octal(va_list args);               /* %o */
int print_hex(va_list args, int uppercase);  /* %x / %X */
int print_pointer(va_list args);             /* %p */

/* utils */
int print_number(long n);
char *convert_unsigned(unsigned long num, int base, int uppercase);
int _strlen(const char *s);

#endif /* MAIN_H */
