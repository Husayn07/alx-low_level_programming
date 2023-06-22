#include "main.h"

/**
 * _isdigit - a function thay check for digit
 * @c: parameter
 * Return: 1 when c is lowwr case else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
