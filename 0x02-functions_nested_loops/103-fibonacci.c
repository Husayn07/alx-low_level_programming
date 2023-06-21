#include <stdio.h>
#include <stdlib.h>

/**
 * main - generate fibonacci number when function is called 
 * fibona - 
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
	int c;
	int d;

	printf("%d, ", x);
	printf("%d, ", y);
	d = x + y;
	printf("%d, ", d);
	c = y;
	for (a = 0; a < 24 ; a++)
	{
		int e;

		e = d + c;
		printf("%d, ", e);
		c = d;
		d = e;
	}
}
