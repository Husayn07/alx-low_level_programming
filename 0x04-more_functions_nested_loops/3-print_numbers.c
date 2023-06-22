#include "main.h"
/**
 * print_numbers - generate a loop for 0 to 9
 * Return: void
 */
void print_numbers(void);
{
	int A;

	for (A = '0'; A <= '9'; A++)
	{
		_putchar(A);
	}
	_putchar('\n');
}
