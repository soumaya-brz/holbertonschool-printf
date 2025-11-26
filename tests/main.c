#include <stdio.h>
#include "main.h"

/**
 * main - simple tests for _printf
 *
 * Return: Always 0
 */
int main(void)
{
	int len;

	len = _printf("Try to print a sentence.\n");
	(void)len;

	_printf("Character: [%c]\n", 'H');
	_printf("String: [%s]\n", "I am a string!");
	_printf("Percent: [%%]\n");

	return (0);
}
