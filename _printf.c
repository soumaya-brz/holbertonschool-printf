#include "main.h"

/**
 * handle_specifier - Handle a format specifier found after '%'
 * @format: format string
 * @idx: pointer to current index in format (will be advanced past specifier)
 * @args: va_list of arguments
 * @funcs: table mapping specifiers to handler functions
 *
 * Description: This helper searches funcs[] for the character at
 * format[*idx] and calls the matching handler. If no handler is
 * found, it prints '%' and the unknown character.
 *
 * Return: number of characters printed for this specifier
 */
static int handle_specifier(const char *format, int *idx, va_list args,
							printer_t funcs[])
{
	int j = 0, printed = 0, found = 0;

	(*idx)++;
	if (format[*idx] == '\0')
		return (0);

	while (funcs[j].symbol)
	{
		if (funcs[j].symbol == format[*idx])
		{
			printed += funcs[j].print(args);
			found = 1;
			break;
		}
		j++;
	}

	if (!found)
	{
		_putchar('%');
		_putchar(format[*idx]);
		printed += 2;
	}

	return (printed);
}

/**
 * _printf - Produces output according to a format
 * @format: A string containing format specifiers
 *
 * Description:
 * Simplified printf supporting %c, %s and %% for now. Uses a table of
 * printer_t to dispatch specifiers to their handler functions.
 *
 * Return: total number of characters printed, or -1 on error
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, printed_chars = 0;

	printer_t funcs[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_int},
		{'i', print_int},
		{'p', print_pointer},
		{'\0', NULL}};

	if (!format)
		return (-1);

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
			printed_chars += handle_specifier(format, &i, args, funcs);
		else
		{
			_putchar(format[i]);
			printed_chars++;
		}
		i++;
	}
	va_end(args);

	return (printed_chars);
}
