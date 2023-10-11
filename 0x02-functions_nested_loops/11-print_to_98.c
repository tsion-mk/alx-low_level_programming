#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * @n: the starting integer
 * the function starts printing integers from n to 98
 *
 */

void print_to_98(int n);

void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n == 98)
			printf("%d ", n);
		else
			printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		if (n == 98)
			printf("%d ", n);
		else
			printf("%d, ", n);
		n--;
	}
	printf("\n");

}
