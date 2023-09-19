#include "main.h"

/**
 * printf_exclusive_string - print exclusive string.
 * @val: argument.
 * Return: the length of the string.
 */
int printf_exclusive_string(va_list val)
{
char *s = va_arg(val, char *);
int len = 0;

if (s == NULL)
s = "(null)";

for (int i = 0; s[i]; i++)
{
if (s[i] < 32 || s[i] >= 127)
{
_putchar('\\');
_putchar('x');
len += 2;
len += printf_HEX_aux(s[i]);
}
else
{
_putchar(s[i]);
len++;
}
}

return (len);
}

