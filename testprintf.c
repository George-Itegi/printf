#include "main.h"

typedef struct {
    char *id;
    int (*f)(va_list);
} convert_match;

convert_match m[] = {
    {"%s", printf_string}, {"%c", printf_char},
    {"%%", printf_37},
    {"%i", printf_int}, {"%d", printf_dec}, {"%r", printf_srev},
    {"%R", printf_rot13}, {"%b", printf_bin}, {"%u", printf_unsigned},
    {"%o", printf_oct}, {"%x", printf_hex}, {"%X", printf_HEX},
    {"%S", printf_exclusive_string}, {"%p", printf_pointer}
};

int _printf(const char * const format, ...)
{
    va_list args;
    va_start(args, format);

    int i = 0;
    int len = 0;

    while (format[i] != '\0')
    {
        long unsigned int j = 0;
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
    va_end(args);
    return len;
}

