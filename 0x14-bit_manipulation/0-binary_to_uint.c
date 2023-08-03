#include "main.h"

/**
 * binary_to_uint - binary number to decimal unisigned
 * @b: binary
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int d;
	int i, bin;

	if (!b)
		return (0);

	d = 0;

	for (i = 0; b[i] != '\0'; i++)
		;

	for (i--, bin = 1; i >= 0; i--, bin *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		if (b[i] & 1)
		{
			d += bin;
		}
	}

	return (d);
}
