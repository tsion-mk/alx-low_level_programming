#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * main - prints the string "_putchar" to the standard output
 *
 * Return : 0
 */

int main(void)
{
	int i;
	char string[] = "_putchar";

	i = 0;

	while (i < (int)strlen(string))
	{
		_putchar(string[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}

