#include "main.h"

/**
 * print_char - prints a character from va_list
 * @args: va_list containing the character
 *
 * Return: 1 (number of characters printed)
 */
int print_char(va_list args)
{
	char c = (char)va_arg(args, int);

	_putchar(c);
	return (1);
}

/**
 * print_string - prints a string from va_list
 * @args: va_list containing the string
 *
 * Return: number of characters printed
 */
int print_string(va_list args)
{
	char *s = va_arg(args, char *);
	int i = 0;

	if (!s)
	{
		char *null_str = "(null)";

		while (null_str[i])
		{
			_putchar(null_str[i]);
			i++;
		}
		return (i);
	}

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}

/**
 * print_percent - prints a percent sign '%'
 *
 * Return: 1 (number of characters printed)
 */
int print_percent(void)
{
	_putchar('%');
	return (1);
}
