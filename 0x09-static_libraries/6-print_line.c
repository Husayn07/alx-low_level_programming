#include "main.h"
/**
 * print_line - a fuction that print a strsight line
 * @n: parameter
 * Return: void
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	_putchar('\n');
}
