#include "main.h"

/**
 * _abs - print absolute value
 * @num: parameter
 * Return: Returns num
 */

int _abs(int num)
{
	if (num > 0)
	{
		return (num);
	}
	else if (num == 0)
	{
		return (0);
	}
	else
	{
		int abs;

		abs = -1 * num;
		return (abs);
	}
}
