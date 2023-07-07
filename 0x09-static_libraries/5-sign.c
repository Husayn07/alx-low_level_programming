#include "main.h"

/**
 * print_sign - print the sign of argunent either +/-
 * @n: parameter
 * Return: Returns 0 and prints 0 if n is zero Returns -1 and prints -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
