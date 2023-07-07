#include <stdio.h>

/**
 * main - a loop that generate numbers
 * Return: fuctiin return 0
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
