#ifndef MAIN_H
#define MAIN_H

/**
 * main.h - prototypes and includes for _printg project
 */

#include <stdarg.h> /* va_list, va_start, va_arg, va_end (macros variadiques) */
#include <stddef.h> /* size_t, NULL */
#include <stdlib.h> /* malloc, free */
#include <unistd.h> /* write */
#include <stdint.h> /* types entiers fixes (uintptr_t) */

/* point d'entrée */
int _printf(const char *format, ...);

int _putchar(char C);

/* handlers pour les specifiers */
int print_char(va_list args);
int print_string(va_list args);
int print_percent(void);

int print_int(va_list args);				/* %d / %i */
int print_unsigned(va_list args);			/* %u */
int print_octal(va_list args);				/* %o */
int print_hex(va_list args, int uppercase); /* %x / %X */
int print_pointer(va_list args);			/* %p */

int _strlen(const char *s);
char *convert_unsigned(unsigned long num, int base, int uppercase);
int print_number(long n);

#endif /* MAIN_H*/
