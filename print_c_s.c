#include "main.h"

/**
 * print_char - prints a character
 * @args: va_list containing the character to print
 *
 * Return: Always returns 1 (the number of characters printed)
 */
int print_char(va_list args)
{
	char c = (char)va_arg(args, int);

	_putchar(c);
	return (1);
}

/**
 * print_string - Prints a string
 * @args: va_list containing the string to print
 *
 * description:
 * If the string is NULL, this function prints "(null)" to mimic
 * the behavior of the standard printf.
 *
 * Return: number of character printed
 */
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
 * print_percent - Prints a percent sign '%'
 *
 *Return: Always returns 1 (the number of characters printed)
 */
int print_percent(void)
{
	_putchar('%');
	return (1);
}
