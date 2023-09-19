#include "main.h"

/**
 * printf_pointer  prints an hexdecimal number value.
 * Return counter.
 */
int printf_pointer(va_list val)
{
	void *p;
	char *n = "(nil)";
	long int a;
	int b;
	int x;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (x = 0; n[x] != '\0'; x++)
		{
			_putchar(n[x]);
		}
		return (x);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = printf_hex_aux(a);
	return (b + 2);
}
