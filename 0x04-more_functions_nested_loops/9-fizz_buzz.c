#include "main.h"
#include <stdio.h>

/**
 * main - to print fizz buzz
 * Return: 0 good
 */

int main(void)
{
	int A;

	for (A = 0; A <= 100; A++)
	{
		if ((A % 3 == 0) && (A % 5 == 0))
		{
		printf("FizzBuzz");
		}
		else if (A % 3 == 0)
		{
		printf("Fizz");
		}
		else if (A % 5 == 0)
		{
		printf("Buzz");
		}
		else
		{
		printf("%d", A);
		}
		if (A != 100)
		{
		printf(" ");
		}
	}
	printf("\n");
	return (0);
}
