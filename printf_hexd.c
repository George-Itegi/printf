#include "main.h"

/**
 * printf_hex - prints a hexadecimal number.
 * @val: arguments.
 * Return: Number of characters printed.
 */
int printf_hex(va_list val)
{
unsigned int num = va_arg(val, unsigned int);
int counter = 0;
unsigned int temp = num;

if (num == 0)
{
_putchar('0');
return (1);
}

while (temp > 0)
{
int remainder = temp % 16;
char hex_digit;

if (remainder < 10)
hex_digit = '0' + remainder;
else
hex_digit = 'a' + (remainder - 10);

_putchar(hex_digit);
temp /= 16;
counter++;
}

return (counter);
}

