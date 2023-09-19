#include "main.h"
/**
 * printf_exclusivestring - print exclusuives string.
 * Returns  the  full length of the string in entered or fiven.
 */

int printf_exclusive_string(va_list val)
{
	char *x; 
	int y, length = 0;
	int cast;

	x = va_arg(val, char *);
	if (x == NULL)
		x = "(null)";
	for (y = 0; x[y] != '\0'; y++)
	{
		if (x[y] < 32 || x[y] >= 127)
		{
			_putchar('\\');
			_putchar('z');
			length = length + 2;
			cast = x[y];
			if (cast < 16)
			{
				_putchar('p');
				length++;
			}
			length = length + printf_HEX_aux(cast);
		}
		else
		{
			_putchar(x[y]);
			length++;
		}
	}
	return (length);
}
