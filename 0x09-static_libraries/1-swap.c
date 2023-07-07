#include "main.h"

/**
 * swap_int - function to change the vale of it pointer
 * @a: parameter
 * @b: parameter
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
