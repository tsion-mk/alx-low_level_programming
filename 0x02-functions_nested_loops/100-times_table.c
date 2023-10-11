#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: n times table
 */

void print_times_table(int n);

void print_times_table(int n)
{
	int i, j, mul;

	if (n < 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				mul = i * j;

				if (mul <= 99)
					_putchar(' ');
				if (mul <= 9)
					_putchar(' ');

				if (mul >= 100)
				{
					_putchar((mul / 100) + '0');
					_putchar(((mul / 10)) % 10 + '0');
				}
				else if (mul <= 99 && mul >= 10)
				{
					_putchar((mul / 10) + '0');
				}
				_putchar((mul % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
