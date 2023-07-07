#include <stdio.h>
#include <stdlib.h>

/**
 * main - min function
 * natural - fuction
 */

int cal(int b, int c);

int main(void)
{

	int a;
	int b = 1;
	int c = 1;

	for (a = 0; a <= 40 ; a++)
	{
		b = b * 3;
		c = c * 5;
		cal(b, c);
	}
	int d = cal(0,0);;
	printf("%d\n", d);
	return (0);
}
int cal(int b, int c)
{
	int sum = b + c;
	sum += sum;
	return (sum);
}
