#include "main.h"
/**
 * print_alphabet_x10 - generate a loop fo a -z
 * Return: void
 */
void print_alphabet_x10(void)
{
	int A;
	int B;

	for (B = 1; B <= 10; B++)
	{
		for (A = 'a'; A <= 'z'; A++)
		{
			_putchar(A);
		}
		_putchar('\n');
	}
}
