#include "main.h"
#include <stdint.h>
/**
 * convert_unsigned - converts an unsigned long to a string in a given base
 * @num: number to convert
 * @base: base (e.g. 16)
 * @uppercase: 0 for lowercase, 1 for uppercase
 *
 * Return: pointer to static buffer
 */
char *convert_unsigned(unsigned long num, int base, int uppercase)
{
	static char buffer[50];
	char *ptr = &buffer[49];
	char *digits = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";

	*ptr = '\0';

	if (num == 0)
	{
		*--ptr = '0';
		return ptr;
	}

	while (num != 0)
	{
		*--ptr = digits[num % base];
		num /= base;
	}

	return ptr;
}

/**
 * print_pointer - prints a pointer address (%p)
 * @args: va_list containing the pointer
 *
 * Return: number of characters printed
 */
int print_pointer(va_list args)
{
	void *p = va_arg(args, void *);
	uintptr_t addr = (uintptr_t)p;
	char *hex;
	int count = 0;

	if (!p)
	{
		return (_printf("(nil)"));
	}

	_putchar('0');
	_putchar('x');
	count += 2;

	hex = convert_unsigned(addr, 16, 0);

	while (*hex)
	{
		_putchar(*hex);
		count++;
		hex++;
	}

	return count;
}
