#include <stdio.h>
/**
 * main - A main fuction thay delcrea char data type
 * loop - a loop fuction
 * Return: this return zero
 */
int main(void)
{
	char A;

	for (A = 'a'; A <= 'z'; A++)
	{
		if (A == 'q' || A == 'e')
		{
			continue;
		}
		putchar(A);
	}
	putchar('\n');
	return (0);
}
