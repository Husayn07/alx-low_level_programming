#include <stdio.h>
/**
 * main - loop to geneeate base 10 numbrs
 * Return: should be zero
 */

int main(void)
{
	int Num;

	char hex;

	hex = 'a';

	Num = 0;
	while
		(Num <= 9) {
			putchar(Num + 48);
			Num++;
		}
	while
		(hex <= 'f') {
			putchar(hex);
			hex++;
		}
	putchar('\n');
	return (0);
}
