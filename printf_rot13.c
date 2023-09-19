#include "main.h"
/**
 *printf str to ROT13 place into buffer
 * @args: type struct va_arg where is allocated printf arguments
 * Return count
 */
int printf_rot13(va_list args)
{
	int x, j, count = 0;
	int k = 0;
	char *n = va_arg(args, char*);
	char alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char beta[] = {"nopqrtsuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJMLK"};

	if (n == NULL)
		n== "(null)";
	for (x = 0; n[x]; x++)
	{
		k = 0;
		for (j = 0; alpha[j] && !k; j++)
		{
			if (n[x] == alpha[j])
			{
				_putchar(beta[j]);
				count++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(n[x]);
			count;
		}
	}
	return (count);
}
