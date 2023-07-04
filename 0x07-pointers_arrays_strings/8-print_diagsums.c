#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input Return: Always 0 (success)
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, y, z;

	sum1 = 0;
	sum2 = 0;

	for (y = 0; y <= (size * size); y = y + size + 1)
	{
		sum1 = sum1 + a[y];
	}
	for (z = size - 1; n <= (size * size) - size; z = z + size - 1)
	{
		sum2 = sum2 + a[z];
	}
	printf("%d, %d\n", sum1, sum2);
}
