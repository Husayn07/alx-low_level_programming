#include <stdio.h>
/**
 *  main - c programmbfor size of data
 * Return: 0 good
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("size of a char: %lu byte(d)\n", (unsigned long)sizeof(a));
printf("size of a int: %lu byte(d)\n", (unsigned long)sizeof(b));
printf("size of a long int: %lu byte(d)\n", (unsigned long)sizeof(c));
printf("size of a long long int: %lu byte(d)\n", (unsigned long)sizeof(d));
printf("size of a float: %lu byte(d)\n", (unsigned long)sizeof(f));
return (0);
}