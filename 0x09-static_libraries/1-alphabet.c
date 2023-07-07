#include "main.h"
/**
 * print_alphabet -: generate a loop fo a -z
 * Return: void
 */
void print_alphabet(void)
{
	int A;

	for (A = 'a'; A <= 'z'; A++)
	{
		_putchar(A);
	}
	_putchar('\n');
}
