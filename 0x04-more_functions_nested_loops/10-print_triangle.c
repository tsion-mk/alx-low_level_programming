#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			j = n;
			while (j < i)
			{
				_putchar(' ');
				j--;
			}
			while (i > 0)
			{
				_putchar('#');
				i--;
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
