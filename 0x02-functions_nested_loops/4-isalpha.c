#include "main.h"

/**
 * _isalpha - Returns 1 if c is a letter, lowercase or uppercase
 * @c: parameter
 * Return: 1 when c is lowwr case else 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
