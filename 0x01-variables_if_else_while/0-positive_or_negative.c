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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
