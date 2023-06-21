#include "main.h"

/**
 * print_last_digit - print the last digit of an argument
 * @num: parameter
 * Return: the last digit
 */

int print_last_digit(int num)
{
	if (num < 0)
	{
		int num1;
		int ld;

		num1 = num * -1;
		ld = num1 % 10;
		_putchar(ld);
	}
	else
	{
		int ld;

		ld = num % 10;
		_putchar('ld');
	}
	return (0);
}
