#include "variadic_functions.h"
/**
 * sum_them_all - sum function
 * @n: parameter constant
 * Return: sum sucess.
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	{
		int sum = 0;
		int i;
		va_list arg;

		va_start(arg, n);


		for (i = 0; i < n; i++)
		{
			sum = sum +  va_arg(arg, int);
		}
		va_end(arg);
		return (sum);
	}
}
