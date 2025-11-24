#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: A string containing zero or more format specifiers
 *
 * Description:
 * This function is a simplified recreation of the standard printf.
 * It scans the format string character by character:
 *
 * - If the character is not '%', it is printed directly.
 *   - If a '%' is encountered, the function checks the next character
 *   to determine which conversion specifier to use.
 *
 *   The function delegates the handling of each specifier to
 *   dedicated helper functions (such as print_char, print_string,
 *   print_percent, etc.).
 *
 *   Supported specifiers in this version:
 *   %c → print a character
 *   %s → print a string
 *    %% → print a literal '%'
 *
 *    Return:
 *    The total number of characters printed. If `format` is NULL,
 *    the function returns -1.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, printed = 0;

	if (!format)
		return (-1);

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				printed += print_char(args);
			else if (format[i] == 's')
				printed += print_string(args);
			else if (format[i] == '%')
				printed += print_percent();
			else
			{
				_putchar('%');
				_putchar(format[i]);
				printed += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			printed++;
		}
		i++;
	}
	va_end(args);
	return (printed);
}
