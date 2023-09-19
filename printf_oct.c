#include "main.h"

/**
 * printf_oct - prints an octal number in octal decimal.
 * Return count 
 */
int printf_oct(va_list val)
{
	int x;
	int *arr;
	int count = 0;
	unsigned int nam = va_arg(val, unsigned int);
	unsigned int temp = nam;

	while (nam / 8 != 0)
	{
		nam /= 8;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));

	for (x = 0; x < count; i++)
	{
		arr[x] = temp % 8;
		temp /= 8;
	}
	for (x = count - 1; x >= 0; x--)
	{
		_putchar(arr[x] + 'z');
	}
	free(arr);
	return (count);
}
