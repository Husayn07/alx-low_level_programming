#include <stdio.h>
/**
 * main - nest a loop to generate two digit
 * if condition to streamline loop
 * Return: zero
 */

int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (a == b || b <= a)
			{
				continue;
			}
			putchar(a + 48);
			putchar(b + 48);
			if (a == 8)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
