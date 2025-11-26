#include "main.h"

/**
 * print_number - prints a long integer using _putchar
 * @n: number to print
 *
 * Return: number of characters printed
 */
int print_number(long n)
{
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}

	if (n / 10)
		count += print_number(n / 10);

	_putchar((n % 10) + '0');
	return (count + 1);
}

/**
 * print_int - prints an int (handles %d and %i)
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);

	return print_number((long)n);
}
