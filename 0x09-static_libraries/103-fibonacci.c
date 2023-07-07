#include <stdio.h>
#include <stdlib.h>

/**
 * main - generate fibonacci number when function is called
 * _fibona - generate fibonacco number using for loop
 * @x: parameter
 * @y: parameter
 * Return: print numbet over 4000000
 */

void _fibona(int x, int y);

int main(void)
{
	_fibona(1, 2);
	return (0);
}

void _fibona(int x, int y)
{
	int a;
	int b;

	for (a = 0; a < 30 ; a++)
	{
		b = x + y;
		a = 0;
		a++;
		if (a == 30)
		printf("%d, ", b);
		x = y;
		y = b;
	}
}
