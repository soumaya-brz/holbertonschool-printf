#include "main.h"

/**
 * _putchar - writes a character to stdout
 * @c: character to print
 *
 * Description:
 * Wrapper around the write system call.
 *
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
