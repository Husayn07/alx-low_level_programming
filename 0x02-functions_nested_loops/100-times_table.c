#include "main.h"

/**
 * print_times_table - to generate for  loops for mutiplocation table
 * @n: parameter
 * Return: void
 */

void print_times_table(int n)
{
	if (n > 0 && n < 15)
	{
		int a;
		int b;
		
		for (a = n; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				int c;
				
				c = a * b;
				_putchar(',');
				_putchar(' ');
				if ((c / 10) == 0)
				_putchar(' ');
				else
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			_putchar('\n');
		}
	}
	else
	return (void);
}
