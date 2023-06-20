#include "main.h"

/**
 * _islower - a function thay check for lower and uppercase char
 * @c: parameter
 * Return: 1 when c is lowwr case else 0
 */

int _islower(int c)
{
	int c;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
