#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - function decread a intge
 * random - a fuction that generate random number should be used
 * Return: 0 is so the code is so continue
 */
int main(void)
{
	int n;

	int X;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	X = n % 10;
	if (X > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, X);
	if (X == 0)
		printf("Last digit of %d is %d and is 0\n", n, X);
	if (X < 6 && X != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, X);
	return (0);
}
