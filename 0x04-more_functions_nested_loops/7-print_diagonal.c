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
			_putchar('\\');
			_putchar('\n');
			for (j = 0; i >= 2 && j < i; j++)
				_putchar(' ');
		}

	}
}
