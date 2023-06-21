#include "main.h"

/**
 * times_table - to generate for  loops for varrying 9
 * Return: 0 succeded
 */

void times_table(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0')
		for (b = 1; b <= 9; b++)
		{
			int c;

			c = a * b;
			if (c / 10 == 0)
			{
			_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
			if (b == 9)
			{
				continue;
			}
			_putchar(',');
			_putchar(' ');
		}
	_putchar('\n');
	}
}
