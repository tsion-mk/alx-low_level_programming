#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @num: the number to be evaluated  in the absolute value
 *
 * Return: the absolute value of a number
 */

int _abs(int num);

int _abs(int num)
{
	if (num < 0)
	{
		num = num * -1;
		return (num);
	}
	else
		return (num);
}
