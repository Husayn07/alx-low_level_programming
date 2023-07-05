#include "main.h"

/**
 * _print_rev_recursion - a function that print string just like puts
 * @s: parameter for adreess
 * Return: void success
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}
