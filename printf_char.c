#include "main.h"

/**
 * printf_char - prints a char or string.
 * @val: arguments to the character.
 * Return: 1.
 */
int printf_char(va_list val)
{
	char x;

	x = va_arg(val, int);
	_putchar(x);
	return (1);
}

