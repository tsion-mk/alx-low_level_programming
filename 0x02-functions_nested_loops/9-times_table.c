#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */

void times_table(void);

void times_table(void)
{
	int i, j, mul;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			mul = i * j;

			if (mul > 9)
			{
				_putchar('0' + (mul / 10));
			}
			else
				_putchar(' ');
			_putchar('0' + (mul % 10));
		}
		_putchar('\n');
	}
}
