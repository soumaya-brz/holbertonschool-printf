#include <stdio.h>
#include "main.h"

int main(void)
{
	int len

		len = _printf("try to print a sentence.\\n");
	(void)len;

	_printf("Character: [%c]\\n", 'H');
	_printf("String: [%s]\\n", "I am a string!");
	_printf("Percent: [%%]\\n");

	return (0);
