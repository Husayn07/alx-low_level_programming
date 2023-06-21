#include "main.h"

/**
 * print_last_digit - print the last digit of an argument
 * @num: parameter
 * Return: the last digit
 */

int print_last_digit(int num)
{
	if (num == 0)
	{
		return (num);
	}
	else
	{
		last_digit;

		last_digit = num % 10; 
		return (last_digit);
	}
}
