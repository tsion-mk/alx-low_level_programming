#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: a number which the sign to be printed
 *
 * Return: 1 if n is +ve, 0 if n is 0 or -1 if n is -ve
 */

int print_sign(int n);

int print_sign(int n)
{
	if (n > 0)
		return (+1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}
