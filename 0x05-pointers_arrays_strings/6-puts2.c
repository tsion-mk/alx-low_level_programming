#include "main.h"

/**
 * puts2 - prints every character of a string, starting from first character
 * @str: a string
 */

void puts2(char *str)
{
	int i, j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	while (j < i)
	{
		_putchar(str[j]);
		j = j + 2;
	}
	_putchar('\n');
}

