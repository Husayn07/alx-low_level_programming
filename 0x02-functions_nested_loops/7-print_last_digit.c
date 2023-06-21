#include "main.h"

/**
 * print_last_digit - print the last digit of an argument
 * @num: parameter
 * Return: the last digit
 */

int print_last_digit(int num)
{
	int ld;

	ld = num % 10:0
	if (num < 0)
	{
		ld *= -1;
	}
		_putchar(ld + '0');
	return (0);
}
