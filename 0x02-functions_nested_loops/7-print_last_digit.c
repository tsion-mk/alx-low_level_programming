#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @num: an integer
 * Return: the value of the last digit
 */

int print_last_digit(int num);
int print_last_digit(int num)
{
	int last_digit;

	last_digit = num % 10;
	if (num < 0)
	{
		_putchar('-');
		_putchar('0' + last_digit);
	}
	else
		_putchar('0' + last_digit);
	return (last_digit);
}

