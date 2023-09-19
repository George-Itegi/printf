#include "main.h"
/**
 * printf_unsigned  prints integer
 * Return number of characters printed
 */
int printf_unsigned(va_list args)
{
	unsigned int s = va_arg(args, unsigned int);
	int nam, last = s % 10, digit, exp = 1;
	int  x = 1;

	s = s / 10;
	nam = s;

	if (last < 0)
	{
		_putchar('-');
		nam = -nam;
		s = -s;
		last = -last;
		x++;
	}
	if (nam > 0)
	{
		while (nam / 10 != 0)
		{
			exp = exp * 10;
			nam = nam / 10;
		}
		nam = s;
		while (exp > 0)
		{
			digit = nam / exp;
			_putchar(digit + '0');
			nam = nam - (digit * exp);
			exp = exp / 10;
			x++;
		}
	}
	_putchar(last + '0');

	return (x);
}
