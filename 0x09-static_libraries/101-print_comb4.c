#include <stdio.h>

/**
 * main - to generate 3 for  loops for varrying 3 int
 * if included - to streamline the standard output
 * Return: 0 succeded
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				if (a >=  b || b >= c || a >= c)
				{
					continue;
				}
			putchar(a + 48);
			putchar(b + 48);
			putchar(c + 48);
				if (a == 7)
				{
					continue;
				}
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
