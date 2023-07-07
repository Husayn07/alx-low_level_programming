#include <stdio.h>
#include "main.h"

/**
 * main - my main fuction
 * @argc: parameter
 * @argv: parameter
 * Return: argc sucess
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
