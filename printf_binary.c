#include "main.h"

int printf_bin(va_list val)
{
    unsigned int num = va_arg(val, unsigned int);
    int count = 0;

    if (num == 0) {
        printf("0");
        return 1;
    }

    int bits = sizeof(num) * 8; // Number of bits in an unsigned int

    for (int i = bits - 1; i >= 0; i--) {
        unsigned int mask = 1 << i;
        int bit = (num & mask) ? 1 : 0;
        if (bit || count) {
            printf("%d", bit);
            count++;
        }
    }

    return count;
}
