#include <stdio.h>
/**
 * main - A main fuction thay delcrea char data type
 * loop - a loop fuction
 * Return: this return zero
 */
int main(void)
{
	char A;

	for(A = 97; A <= 122; A++)
	{
		if (A == 101 || A == 113) {
			continue;
		}
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
