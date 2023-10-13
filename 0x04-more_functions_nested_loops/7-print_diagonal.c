#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: n is the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 0; i >= 2 && j < i - 1; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}

	}
}
