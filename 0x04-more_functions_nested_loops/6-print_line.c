#include "main.h"
/**
 * print_line - a fuction that print a strsight line
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
	}
	else 
		_putchar('\n');
}
