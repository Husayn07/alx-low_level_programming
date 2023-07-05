#include "main.h"

/**
 * _print_rev_recursion - a function that print string just like puts
 * @s: parameter for adreess
 * Return: void success
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		_print_rev_recursion(s + 1);
	}
	s = s + i;
	if (*s)
	{
		_putchar(*s);
		_print_rev_recursion(s - 1);
	}
	else
	{
		_putchar('\n');
	}
}
