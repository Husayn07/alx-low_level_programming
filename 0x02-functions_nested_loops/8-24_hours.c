#include "main.h"

/**
 * jack_bauer - to generate 4 for  loops for varrying 3 int
 *
 * Return: 0 succeded
 */

void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					if (a == 2 && b == 3 && c == 5 && d == 9)
					{
					_putchar(a + 48);
					_putchar(b + 48);
					_putchar(':');
					_putchar(c + 48);
					_putchar(d + 48);
					_putchar('\n');
					break;
					}
				}
			}
		}
	}
}