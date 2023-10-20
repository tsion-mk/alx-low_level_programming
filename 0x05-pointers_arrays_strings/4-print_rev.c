#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: a string to be reversed
 */

void print_rev(char *s)
{
	int i, j,len;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	len = i;
	j = len - 1;
	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
