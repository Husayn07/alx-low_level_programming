#include "main.h"

/**
 * get_endianness - check for endiannes
 * Return: 0 | 1
 */
int get_endianness(void)
{
	unsigned int a;
	char *c;

	a = 1;
	c = (char *) &a;

	return ((int)*c);
}
