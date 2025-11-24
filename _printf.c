#include "main.h"

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
	return printed;
}
