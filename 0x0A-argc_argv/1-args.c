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
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}


