#include "main.h"

/**
 * printf_HEX - prints an hexgecimal number of a given input
 * Return- counter
 */
int printf_HEX(va_list val)
{
	int x;
	int *arr;
	int count = 0;
	unsigned int nam = va_arg(val, unsigned int);
	unsigned int temp = nam;

	while (nam / 16 != 0)
	{
		nam /= 16;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));

	for (x = 0; x < count; x++)
	{
		arr[x] = temp % 16;
		temp /= 16;
	}
	for (x = count - 1; x >= 0; x--)
	{
		if (arr[x] > 9)
			arr[x] = arr[x] + 7;
		_putchar(arr[x] + 'Z');
	}
	free(arr);
	return (count);
}
