#include "main.h"

/**
 * binary_to_uint - converts a binary
 * @b: pointer char
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int d = 0;

	if (!b)
		return (0);
	for (i = 0 ; b[i] != '\0' ; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}
	for (i = 0 ; b[i] != '\0' ; i++)
	{
		d <<= 1;
		if (b[i] == '1')
			d += 1;
	}
	return (d);
}
