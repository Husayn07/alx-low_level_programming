#include "main.h"

/**
 * _puts_recursion - a function that print string just like puts
 * @s: parameter for adreess
 * Return: void success
 */

void _puts_recursion(char *s)
{
	if (*s = '\0')
	{
		_putchar('\n');
		break;
	}
	else
	{
		_putchar(*s);
		++s;
		_puts_recursion(char *s);
	}
}
