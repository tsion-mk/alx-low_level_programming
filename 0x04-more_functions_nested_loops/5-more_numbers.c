#include "main.h"

/**
 * more_number - prints 10 times the number, from 0 to 14
 *
 */

void more_number(void)
{
	int i, j;

	i = 0;
	while (i <= 9)
	{
		j = 0;

		while (j <= 14)
		{
			_putchar(j);
			j++;
		}

		_putchar('\n');

		i++;
	}
	_putchar('\n');
}


