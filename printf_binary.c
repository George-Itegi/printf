#include "main.h"

/**
 * printf_bin - prints a binary number.
 * @val: arguments.
 * Return: Number of characters printed.
 */
int printf_bin(va_list val)
{
	unsigned int num = va_arg(val, unsigned int);
	int cont = 0;
	int leading_zeros = 1;

	for (int i = 31; i >= 0; i--)
	{
		int bit = (num >> i) & 1;
		if (bit || !leading_zeros)
		{
			_putchar('0' + bit);
			cont++;
			leading_zeros = 0;
		}
	}

	if (cont == 0)
	{
		_putchar('0');
		cont = 1;
	}

	return cont;
}
