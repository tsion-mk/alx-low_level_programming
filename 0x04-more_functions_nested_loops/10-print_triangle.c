#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			j = size;
			while (j < i)
			{
				_putchar(' ');
				j--;
			}
			k = i;
			while (k > 0)
			{
				_putchar('#');
				k--;
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
