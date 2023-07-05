#include "main.h"

/**
 * _puts_recursion - a function that print string just like puts
 * Return: void success
 */

void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		++s;
	}
	_putchar('\n');
}