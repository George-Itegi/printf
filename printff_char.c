#include "main.h"

/**
 * printf_char - prints a char but only one.
 * Return: 1.
 */
int printf_char(va_list val)
{
	char z;

	z = va_arg(val, int);
	_putchar(z);
	return (1);
}
