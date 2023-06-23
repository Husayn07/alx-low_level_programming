#include "main.h"

/**
 * more_numbers - to print number 0-14
 * Return: 0
 */

void more_numbers(void)
{
	int A, B;

	for (A = 1; A < 11; A++)
	{
		for (B = 0; B < 15; B++)
		{
			if (B >= 10 && B <= 14)
			{
			_putchar((B / 10) + '0');
			}
			_putchar((B % 10) + '0');
		}
		_putchar('\n');
	}
}
