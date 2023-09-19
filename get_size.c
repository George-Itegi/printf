#include "main.h"

/**
 * get_size - Calculates the size to cast the argument
 * @format: formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 *
 * Return: Precision.
 */
int get_size(const char *format, int *i)
{
	int cur_i = *i + 1;
	int siz = 0;

	if (format[cur_i] == 'l')
		siz = S_LONG;
	else if (format[cur_i] == 'h')
		siz = S_SHORT;

	if (siz == 0)
		*i = cur_i - 1;
	else
		*i = cur_i;

	return (siz);
}

