#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - function decleated ith rwthrn
 * random - a fuction that generate random number should be used
 * Return: 0 is so the code is so continue
 */
int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 5;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, m);
	if (n < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	return (0);
}