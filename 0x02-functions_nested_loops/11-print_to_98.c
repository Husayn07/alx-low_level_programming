#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_to_98 - print all natural number from input to 98
 * @n: parameter
 * Return: void
 */

void print_to_98(int n)
{
	int a;
	
	if (n > 98)
	{
		for (a = n; a != 98 ; a--)
		{
			printf("%d, ", a);
		}
		printf("%d\n", a--);
	}
	else if (n == 98)
		printf("98\n");
	else
	{
		for (a = n; a != 98 ; a++)
		{
			printf("%d, ", a);
		}
		printf("%d\n", a++);
	}
}
