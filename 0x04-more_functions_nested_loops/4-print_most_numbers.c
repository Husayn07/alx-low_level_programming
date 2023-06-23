#include "main.h"
/**
 * print_most_numbers - generate a loop for 0 to 9 n 2  abd 4
 * Return: void
 */
void print_most_numbers(void)
{
	int A;

	for (A = '0'; A <= '9'; A++)
	{
		_putchar(A);
		if ((A == '2') || (A == '4'))
		{
		continue;
		}
	}
	_putchar('\n');
}
