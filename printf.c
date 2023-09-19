#include "main.h"

int _printf(const char * const format, ...)
{
 int i;
 int len;
 int j;
    convert_match m[] = {
        {"%s", printf_string},
        {"%c", printf_char},
        {"%%", printf_37},
        {"%i", printf_int},
        {"%d", printf_dec},
        {"%r", printf_srev},
        {"%R", printf_rot13},
        {"%b", printf_bin},
        {"%u", printf_unsigned},
        {"%o", printf_oct},
        {"%x", printf_hex},
        {"%X", printf_HEX},
        {"%S", printf_exclusive_string},
        {"%p", printf_pointer}
    };

    va_list args;
    va_start(args, format);

    i=0;
    len=0;

    if (format == NULL || (format[0] == '%' && format[1] == '\0'))
        return (-1);

    while (format[i] != '\0')
    {
        j = 13;
        while (j >= 0)
        {
            if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
            {
                len += m[j].f(args);
                i = i + 2;
                goto Here;
            }
            j--;
        }
        _putchar(format[i]);
        len++;
        i++;
    Here:
        continue;
    }

    va_end(args);
    return (len);
}
