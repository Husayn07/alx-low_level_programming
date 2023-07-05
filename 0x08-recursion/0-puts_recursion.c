#include "main.h"

/**
 * _puts_recursion - a function that print string just like puts
 * @s: parameter for adreess
 * Return: void success
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s +1);
	}
	else
	{
		_putchar('\n');
	}
}
