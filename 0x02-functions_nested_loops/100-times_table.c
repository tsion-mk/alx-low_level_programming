#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: n times table
 */

void print_times_table(int n);

void print_times_table(int n)
{
	int i, j, mul;

	if (n < 15 && n != 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				mul = i * j;

				if (mul > 9 && mul < 99)
				{
					_putchar('0' + (mul / 10));
				}
				else if (mul > 99)
				{
					_putchar('0' + (mul /100));
					_putchar('0' + ((mul /10) % 10));
				}	
				else
					_putchar(' ');
				_putchar('0' + (mul % 10));
			}
			_putchar('\n');
		}
	}
}
