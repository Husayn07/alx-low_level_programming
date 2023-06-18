#include <stdio.h>

/**
 * main - to generate 4 for  loops for varrying 4 int
 * if included - to streamline the standard output
 * Return: 0 succeded
 */

int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					if (c < a || d < b)
					{
						continue;
					}
					putchar(a + 48);
					putchar(b + 48);
					putchar(' ');
					putchar(c + 48);
					putchar(d + 48);
					if (a == 9 && b == 8 && c == 9 && d == 9)
					{
						continue;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
