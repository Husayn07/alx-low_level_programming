#include "varaidic_functions.h"

/**
 * print_numbers - a funcyion to print numbers
 * @n: a constant number
 * @seperator: char pointer /string litera
 * * Return: integers.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	va_start(arg, n);
	int i;
	if (seperator == NULL)
		return (void);
	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(int), seperator);
	}
	_putchar('\n');
}
