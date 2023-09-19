#include "main.h"

/**
 * printf_srev - function that prints a str in reverse
 * Returns string
 */
int printf_srev(va_list args)
{

	char *n = va_arg(args, char*);
	int x;
	int j = 0;

	if (n == NULL)
		n = "(null)";
	while (n[j] != '\0')
		j++;
	for (x = j - 1; x >= 0; x--)
		_putchar(n[x]);
	return (j);
}
