#include <stdio.h>
/**
 * main - loop to geneeate base 10 numbrs
 * Return: should be zero
 */

int main(void)
{
	int Num;

	for (Num = 0; Num <= 9; Num++)
	{
		putchar(Num + 48);
			if (Num == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
