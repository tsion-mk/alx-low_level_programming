#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: integer to be swaped with b
 * @b: integer to be swaped with a
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
