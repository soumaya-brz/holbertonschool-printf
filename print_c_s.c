#include "main.h"

int print_char(va_list args)
{
	char c = (char)va_arg(args, int);
	_putchar(c);
	return 1;
}

int print_string(va_list args)
{
	char *s = va_arg(args, char *);
	int i = 0;

	if (!s)
	{
		char *nulls = "(null)";
		while (nulls[i])
		{
			_putchar(nulls[i]);
			i++;
		}
		return i;
	}

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return i;
}

int print_percent(void)
{
	_putchar('%');
	return 1;
}
