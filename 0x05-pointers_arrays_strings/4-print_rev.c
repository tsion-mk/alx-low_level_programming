#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: a string to be reversed
 */

void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
