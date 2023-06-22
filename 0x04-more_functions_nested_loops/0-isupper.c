#include "main.h"

/**
 * _isupper - a function thay check for lower and uppercase char
 * @c: parameter
 * Return: 1 when c is lowwr case else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
