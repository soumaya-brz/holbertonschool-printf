#include "main.h"

/**
 * print_char - prints a character
 * @args: va_list containing the character
 *
 * Return: Always 1
 */
int print_char(va_list args)
{
	char c = (char)va_arg(args, int);

	_putchar(c);
	return (1);
}

/**
 * print_string - prints a string
 * @args: va_list containing the string
 *
 * Return: Number of characters printed
 */
int print_string(va_list args)
{
	char *s = va_arg(args, char *);
	int i = 0;
	char *nulls = "(null)";

	if (!s)
	{
		while (nulls[i])
		{
			_putchar(nulls[i]);
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
 * @args: unused va_list parameter
 *
 * Return: Always 1
 */
int print_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
