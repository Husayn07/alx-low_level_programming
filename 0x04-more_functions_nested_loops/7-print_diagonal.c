#include "main.h"
/**
 * print_diagonal - a fuction that print a diagonal line
 * @n: parameter
 * Return: void
 */

void print_diagonal(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			for (a = 1; a <= n; a++)
			{
				if (n == a)
				_putchar('\n');
				else if
				_putchar(' ');
			}
		_putchar('\\');
		}
	}
	else
	_putchar('\n');
}
