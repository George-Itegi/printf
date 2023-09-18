#include "main.h"

/**
 * printf_rot13 - printf str to ROT13 and place it into a buffer
 * @args: struct va_arg with printf arguments
 * Return: number of characters printed
 */
int printf_rot13(va_list args)
{
	char *s = va_arg(args, char *);
	int counter = 0;

	if (s == NULL)
		s = "(null)";

	for (; *s; s++)
	{
		if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
		{
			char base = (*s >= 'a' && *s <= 'z') ? 'a' : 'A';
			_putchar(((*s - base + 13) % 26) + base);
			counter++;
		}
		else
		{
			_putchar(*s);
			counter++;
		}
	}

	return counter;
}

