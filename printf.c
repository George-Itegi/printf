
#include "main.h"

/**
 * _printf - Custom printf function.
 * @format: Format string with format specifiers.
 * @...: Variable number of arguments based on format specifiers.
 * Return: The number of characters printed.
 */
int _printf(const char * const format, ...)
{
    va_list args;
    int len = 0;
    int i = 0;

    va_start(args, format);
    while (format && format[i])
    {
        if (format[i] == '%')
        {
            i++;
            if (!format[i])
                break;

            switch (format[i])
            {
                case 's':
                    len += printf_string(va_arg(args, char *));
                    break;
                case 'c':
                    len += printf_char(va_arg(args, int));
                    break;
                case '%':
                    len += printf_37();
                    break;
                case 'i':
                case 'd':
                    len += printf_int(va_arg(args, int));
                    break;
                case 'r':
                    len += printf_srev(va_arg(args, char *));
                    break;
                case 'R':
                    len += printf_rot13(va_arg(args, char *));
                    break;
                case 'b':
                    len += printf_bin(va_arg(args, unsigned int));
                    break;
                case 'u':
                    len += printf_unsigned(va_arg(args, unsigned int));
                    break;
                case 'o':
                    len += printf_oct(va_arg(args, unsigned int));
                    break;
                case 'x':
                    len += printf_hex(va_arg(args, unsigned int));
                    break;
                case 'X':
                    len += printf_HEX(va_arg(args, unsigned int));
                    break;
                case 'S':
                    len += printf_exclusive_string(va_arg(args, char *));
                    break;
                case 'p':
                    len += printf_pointer(va_arg(args, void *));
                    break;
                default:
                    _putchar('%');
                    _putchar(format[i]);
                    len += 2;
                    break;
            }
        }
        else
        {
            _putchar(format[i]);
            len++;
        }
        i++;
    }
    va_end(args);
    return (len);
}

