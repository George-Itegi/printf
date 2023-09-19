#include "main.h"
/**
 * _strlen -Returns the lenght of a string.
 * @s: Type chararacter pointer
 * Return c.
 */
int _strlen(char *n)
{
	int z;

	for (z = 0; n[z] != 0; z++)
		;
	return (z);

}
/**
 * _strlenc - Strlen function but applied for constant char pointer s
 * @s: Type character pointer
 * Return c
 */
int _strlenc(const char *n)
{
	int z;

	for (z = 0; n[z] != 0; z++)
		;
	return (z);
}
