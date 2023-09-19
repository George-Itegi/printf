#include "main.h"
/**
 * printf_string -print a string.
 * Return the length of the string.
 */

int printf_string(va_list val)
{
	char *n;
	int x, length;

	n = va_arg(val, char *);
	if (n == NULL)
	{
		n = "(null)";
		length = _strlen(n);
		for (x = 0; x < length; x++)
			_putchar(n[x]);
		return (length);
	}
	else
	{
		length = _strlen(n);
		for (x = 0; x < length; x++)
			_putchar(n[x]);
		return (length);
	}
}
