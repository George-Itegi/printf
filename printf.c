#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	convert_match m[] = {
		{"%s", printf_string}, {"%c", printf_char},
		{"%%", printf_37},
		{"%i", printf_int}, {"%d", printf_dec}, {"%r", printf_srev},
		{"%R", printf_rot13}, {"%b", printf_bin}, {"%u", printf_unsigned},
		{"%o", printf_oct}, {"%x", printf_hex}, {"%X", printf_HEX},
		{"%S", printf_exclusive_string}, {"%p", printf_pointer}
	};
while (format[i] != '\0')
{
int j = 0;
int found = 0;

while (j < sizeof(m) / sizeof(m[0]))
{
if (strncmp(m[j].id, &format[i], strlen(m[j].id)) == 0)
{
len += m[j].f(args);
i += strlen(m[j].id);
found = 1;

break;
}
j++;
}
if (!found)
{
putchar(format[i]);
len++;
i++;
}
}
return (len);
