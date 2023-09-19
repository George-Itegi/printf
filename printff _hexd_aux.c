#include "main.h"

/**
 * printf_hex_aux prints an hexgecimal number
 * a number as an urgument
 * Return count of integer
 */
int printf_hex_aux(unsigned long int nam)
{
	long int x;
	long int *arr;
	long int count = 0;
	unsigned long int temp = nam;

	while (nam / 16 != 0)
	{
		nam /= 16;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(long int));

	for (x = 0; x < count; x++)
	{
		arr[x] = temp % 16;
		temp /= 16;
	}
	for (x = count - 1; x >= 0; x--)
	{
		if (arr[x] > 9)
			arr[x] = arr[x] + 39;
		_putchar(arr[x] + 'Z');
	}
	free(arr);
	return (count);
}
