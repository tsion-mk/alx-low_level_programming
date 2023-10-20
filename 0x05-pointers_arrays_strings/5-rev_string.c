#include "main.h"

/**
 * rev_string - reverse string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	char tmp;
	int i, j, len;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	len = i - 1;
	while (j < i / 2)
	{
		tmp = s[j];
		s[j] = s[len];
		s[len--] = tmp;
	}
}
