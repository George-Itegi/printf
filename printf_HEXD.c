#include "main.h"

int printf_HEX(va_list val)
{
    unsigned int num = va_arg(val, unsigned int);
    char hex[100];
    int i = 0;
    int counter;
    while (num != 0)
    {
        int remainder = num % 16;
        if (remainder < 10)
        {
            hex[i] = remainder + '0';
        }
        else
        {
            hex[i] = remainder + '7';
        }
        num /= 16;
        i++;
    }

    counter = i;
    for (i = counter - 1; i >= 0; i--)
    {
        putchar(hex[i]);
    }

    return counter;
}

